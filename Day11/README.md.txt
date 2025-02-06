#OOPs Practice: Classes in C++
##Coding Platform:
This solution was implemented and tested on HackerRank in the "C++ Classes" section.

###Problem Statement:
Implement a Student class with the following attributes:

age (integer)
first_name (string)
last_name (string)
standard (integer)
Create getter and setter functions for each attribute:

get_age(), set_age(int age)
get_first_name(), set_first_name(string first_name)
get_last_name(), set_last_name(string last_name)
get_standard(), set_standard(int standard)
Additionally, implement a to_string() method that returns all attributes in a comma-separated format.

-Input Format:
The input consists of four lines:
An integer representing age.
A string representing first_name.
A string representing last_name.
An integer representing standard.

-Output Format:
Print the student's age.
Print the student's last name and first name in the format:
last_name, first_name
Print the student's standard.
Print all attributes as a single string, separated by commas.

Sample Input:
15
john
carmack
10
Expected Output:
15
carmack, john
10
15,john,carmack,10

####Approach:
Class Definition:

Define a Student class with private attributes for encapsulation.
Provide public getter and setter methods for data access.
Encapsulation:

Use private members to prevent direct access.
Implement public methods to manipulate and retrieve data.
Method Implementation:

to_string() method concatenates attributes using stringstream for easy formatting.
I/O Handling:

Read input values, set them using setter methods, and display them using getter methods.