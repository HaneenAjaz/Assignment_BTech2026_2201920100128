# OOPs Practice: Inheritance and Method Overriding in Java

# Coding Platform:
This solution was implemented and tested on HackerRank in the "Java OOPs" section.

###Problem Statement:
Implement the following Java classes:
A class named Sports with two methods:
-String getName(): Returns the string "Generic Sports".
-void getNumberOfTeamMembers(): Prints "Each team has n players in Generic Sports".

A class named Soccer that inherits from the Sports class and overrides:
-getName(): Returns the string "Soccer Class".
-getNumberOfTeamMembers(): Prints "Each team has 11 players in Soccer Class".

####Requirements:
-The Sports class should provide a general representation of a sport.
-The Soccer class should override methods to provide soccer-specific details.
-Use the @Override annotation to explicitly mark overridden methods.

-The output should include:
Generic Sports
Each team has n players in Generic Sports
Soccer Class
Each team has 11 players in Soccer Class

#####Approach:

-Class Definition:
Define a Sports class with the getName() and getNumberOfTeamMembers() methods.
Define a Soccer class that extends Sports and overrides these methods.

-Method Overriding:
The Soccer class overrides getName() to return "Soccer Class".
The Soccer class overrides getNumberOfTeamMembers() to print "Each team has 11 players in Soccer Class".

-Class Inheritance:
Soccer inherits all methods from Sports but modifies behavior using method overriding.

-Output Verification:
Instantiate objects of both Sports and Soccer classes and call their respective methods.
Ensure the output matches the expected format.

