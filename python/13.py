file1 = open(r"D:\college sem 3 pdf\PWP\pdf for assignment\ict.txt",'r')
# for i in file1:
#     print(i)
# file1 = open(r"D:\college sem 3 pdf\PWP\pdf for assignment\ict.txt",'r')
# print(file1.read())
# file1 = open(r"D:\college sem 3 pdf\PWP\pdf for assignment\ict.txt",'r')
# print(file1.readline())  #it gives the first line og the text file..
# file1 = open(r"D:\college sem 3 pdf\PWP\pdf for assignment\ict.txt",'r')
# print(file1.readlines(3))  #it give the line from your cursor to that line.
# file1 = open(r"D:\college sem 3 pdf\PWP\pdf for assignment\ict.txt",'r')
# print(file1.readlines())   # it gives all lines of the file
# file1.close()

# import csv
# with open('3EK1A.csv','w',newline=' ') as file:
#     writer = csv.writer(file)
#     # writer.writerow(['Name'['Nisith'],['Sd']])

with open(r"D:\college sem 3 pdf\PWP\pdf for assignment\ict.txt",'r') as f1:  
    data = f1.read() 
# print(data)

file1 = open(r"D:\college sem 3 pdf\PWP\pdf for assignment\ict.txt",'r')
# print (file1.read(5))


with open(r"D:\college sem 3 pdf\PWP\pdf for assignment\ict.txt",'r') as file:
    data = file.readlines()
    for line in data:
        word = line.split()
        # print (word)

# file = open("ict1.txt",'w')
# file.write("ICT ICT ICT \n")
# file.write("ICT ICT ICT ICT ICT")
# file.close()


# with open("darshit.txt", "w") as f: 
#     f.write("Hello World!!!") 
#     f.close()


# file = open("ict1.txt",'a')
# file.write("\n Department Department")
# file.close()



# with open(r'D:\college sem 3 pdf\PWP\pdf for assignment\ict.txt', 'rb') as file:
#     binary_data = file.read()
# # print(binary_data)

# with open('c.tif', 'wb') as f:
#     f.write(binary_data)
#     f.close()


import csv
# Reading from a CSV file
# with open('data-1.csv', 'r') as file:
#     reader = csv.reader(file)
    # for row in reader:
        # print(row)


# import csv
# with open('output.csv', 'w', newline='') as file:
#     writer = csv.writer(file)
#     writer.writerow(['Name', 'Subject', 'Mark'])
#     writer.writerow(['Aansh', 'PWP', 9])
#     writer.writerow(['Ashutosh', 'PWP', 10])
#     file.close()


# with open("ict.txt", "r") as file:
#     lines = 0
#     words = 0
#     chars = 0
#     for line in file:
#         lines += 1
#         words += len(line.split())
#         chars += len(line)

# print("Lines:", lines)
# print("Words:", words)
# print("Characters:", chars)


# with open("ict.txt", "r") as file:
#     lines = file.readlines()

# lines = [line.strip() for line in lines]  # remove newline characters
# print(lines)

# import csv

# with open("data-1.csv", "r") as file:
#     reader = csv.reader(file)
#     for row in reader:
#         print(row)


with open("ict.txt", "r") as f1, open("ict1.txt", "r") as f2, open("merged.txt", "w") as mf:
    mf.write(f1.read())
    mf.write("\n")  # optional newline
    mf.write(f2.read())

print("Files merged into merged.txt")
