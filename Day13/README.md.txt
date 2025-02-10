# OOPs Practice:Box It!
##Coding Platform:
This solution was implemented and tested on HackerRank in the "C++ Classes" section.

###Problem Statement:
Design a class named Box with private integer attributes: length, breadth, and height.

###Requirements:
The class should include:
Constructors:
A default constructor that initializes all dimensions to 0.
A parameterized constructor that initializes dimensions with given values.
A copy constructor that initializes an object with another Box object.

Getter Functions:
getLength() → Returns length.
getBreadth() → Returns breadth.
getHeight() → Returns height.

Volume Calculation:
CalculateVolume() → Returns the volume (length × breadth × height).

Operator Overloading:
< Operator: Defines box comparison rules based on dimensions.
<< Operator: Outputs box dimensions in the format length breadth height.

####Approach:
Class Definition:

Declare the Box class with private attributes and necessary methods.
Constructor Implementation:

Default constructor initializes all values to 0.
Parameterized constructor assigns values based on input.
Copy constructor copies another Box object's dimensions.
Member Functions:

Getter methods return individual dimensions.
CalculateVolume() computes the volume.
Operator Overloading:

Overload < operator to compare boxes based on problem-defined conditions.
Overload << operator to print Box dimensions.