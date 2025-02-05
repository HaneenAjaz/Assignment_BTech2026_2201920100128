#OOPs Practice: Multi-Level Inheritance in Java
##Coding Platform:
This solution was implemented and tested on HackerRank in the "C++ OOPs" section.

#Problem Statement:
Implement the following Java classes:

A class named Triangle with a method triangle() that prints "I am a triangle".
A class named Isosceles that inherits from Triangle and has a method isosceles() that prints "I am an isosceles triangle".
A class named Equilateral that inherits from Isosceles and has a method equilateral() that prints "I am an equilateral triangle".

###Requirements:
Your triangle() method should print "I am a triangle".
Your isosceles() method should print "I am an isosceles triangle".
Your equilateral() method should print "I am an equilateral triangle".
Use multi-level inheritance to ensure Equilateral inherits from Isosceles, and Isosceles inherits from Triangle.

-The output should include:
I am an equilateral triangle
I am an isosceles triangle
I am a triangle

#####Approach:
-Class Definition:

Create a Triangle class with a triangle() method that prints "I am a triangle".
Create an Isosceles class that inherits from Triangle and adds the isosceles() method.
Create an Equilateral class that inherits from Isosceles and adds the equilateral() method.

-Class Inheritance:

Isosceles inherits the triangle() method from Triangle.
Equilateral inherits both the isosceles() and triangle() methods from Isosceles.
Method Calls:

Create an Equilateral object, and call the inherited methods to print the required outputs.

-Output:
Print the results in the order of the method calls from the Equilateral class.