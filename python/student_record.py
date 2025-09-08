import sqlite3

# Connect to database (or create it if not exists)
conn = sqlite3.connect('student_record.db')
cursor = conn.cursor()

# Create students table (supports multiple subjects per student)
cursor.execute('''CREATE TABLE IF NOT EXISTS student_record (
                    Enrollment INTEGER,
                    Name TEXT NOT NULL,
                    Subject TEXT NOT NULL,
                    Mark INTEGER NOT NULL,
                    PRIMARY KEY (Enrollment, Subject)
                )''')
conn.commit()

# Insert multiple student records (with multiple subjects for one student)
student_records = [
    (92301733016, 'ASHUTOSH KUMAR SINGH', 'PWP', 95),
    (92301733016, 'ASHUTOSH KUMAR SINGH', 'DBMS', 89),
    (92301733017, 'HARSH VISHALBHAI TRIVEDI', 'PWP', 85),
    (92301733027, 'VIRAJ PRAKASHBHAI VAGHASIYA', 'PWP', 90),
    (92301733027, 'VIRAJ PRAKASHBHAI VAGHASIYA', 'OS', 92),
    (92301733046, 'SHIVAM ATULKUMAR BHATT', 'PWP', 93),
    (92301733058, 'DEVENDRASINH DOLATSINH JADEJA', 'PWP', 75)
]

cursor.executemany('''INSERT OR IGNORE INTO student_record (Enrollment, Name, Subject, Mark) 
                      VALUES (?, ?, ?, ?)''', student_records)
conn.commit()

# Fetch all student records
print("\nAll Student Records:")
cursor.execute('SELECT * FROM student_record')
rows = cursor.fetchall()
for row in rows:
    print(row)

# Fetch students with marks greater than 90
print("\nStudents with Marks greater than 90:")
cursor.execute('SELECT Name, Subject, Mark FROM student_record WHERE Mark > 90')
for student in cursor.fetchall():
    print(student)

# Update Mark for a student
cursor.execute('''UPDATE student_record SET Mark = 98 
                  WHERE Name = 'ASHUTOSH KUMAR SINGH' AND Subject = 'PWP' ''')
conn.commit()

cursor.execute('SELECT Name, Subject, Mark FROM student_record WHERE Name = "ASHUTOSH KUMAR SINGH"')
print("\nUpdated Marks:", cursor.fetchall())

# Delete a student’s subject record
cursor.execute('''DELETE FROM student_record 
                  WHERE Name = 'DEVENDRASINH DOLATSINH JADEJA' AND Subject = 'PWP' ''')
conn.commit()

cursor.execute('SELECT * FROM student_record WHERE Name = "DEVENDRASINH DOLATSINH JADEJA"')
deleted_record = cursor.fetchone()
if deleted_record is None:
    print("\nDEVENDRASINH DOLATSINH JADEJA has been successfully deleted.")

# Calculate average mark
cursor.execute('''SELECT AVG(Mark) FROM student_record''')
avg_mark = cursor.fetchone()[0]
print(f"\nThe average mark of students is: {avg_mark:.2f}")

# Post Lab Exercise: Multiple subject enrollment handled by (Enrollment, Subject) composite key
print("\n✅ Post Lab Done: A student can now enroll in multiple subjects at once.")

# Close the connection
conn.close()
