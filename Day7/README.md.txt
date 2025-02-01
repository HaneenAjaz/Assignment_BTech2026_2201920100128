#OOPs Practice: Java Iterator

#Coding Platform:
This solution was implemented and tested on HackerRank in the "Java OOPs" section.

##Problem Statement:
Implement a Java program demonstrating the use of the Iterator class. You are given an ArrayList containing a mix of integers and strings, with a special string "###" acting as a separator.
Your task is to complete the func method so that it prints only the elements that appear after "###".

####Requirements:
-Modify at most 2 lines of the provided code.
-Use the Iterator class to traverse the ArrayList.
-Ensure that only elements after "###" are printed.
-The input list structure is predefined in the main method and does not contain "###" from standard input.

-Sample Input:
element[0]=>42
element[1]=>10
element[2]=>"###"
element[3]=>"Hello"
element[4]=>"Java"

-Expected Output:
Hello
Java

####Approach:
-Class Definition:
Implement a method func that iterates through the ArrayList.

-Using Iterator:
Traverse the ArrayList using an Iterator.

-Detect the occurrence of "###".

-Start printing elements only after "###" appears.

-Output Verification:
Ensure that the output matches the expected format.
Confirm that only 2 lines are modified in the given code.

