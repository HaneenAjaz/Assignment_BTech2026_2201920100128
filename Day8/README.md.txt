#OOPs Practice: Student Scores Comparison

##Coding Platform:
This solution was implemented and tested on HackerRank in the "Java OOPs" section.

###Problem Statement:
Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the exams given during this semester.

You need to create a class named Student with the following specifications:
-An instance variable to store a student's exam scores.
-A void input() function that reads multiple integers and saves them as scores.
-An int calculateTotalScore() function that returns the sum of the student's scores.

-Input Format:
The first line contains n, the number of students in Kristen's class.
The next n lines contain each student's exam grades for the semester.

-Output Format:
The number of students who scored higher than Kristen.

-Sample Input:
3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10

-Expected Output: 
1

####Approach:
-Class Definition:
Define a Student class with an instance variable to store scores.
Implement an input() function to read scores from standard input.
Implement calculateTotalScore() to compute the total sum of scores.

-Processing the Input:
Read n, the number of students.
Read each student's scores and store them in a list.

-Comparison Logic:
Compute Kristen's total score (the first student's total score).
Compare Kristen's score with other students' scores to count how many scored higher.

-Output Verification:
Ensure that the output matches the expected format.
Verify that the number of students scoring higher than Kristen is correctly counted.