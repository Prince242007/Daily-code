SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(student) >= 5;



// leetcode 596 code