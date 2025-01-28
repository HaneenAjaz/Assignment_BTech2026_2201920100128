# OOPs Practice: Interface Implementation in Java

#Coding Platform:
This solution was implemented and tested on **HackerRank** in the "Java OOPs" section.

### Problem Statement:
You are given an interface AdvancedArithmetic with a method signature int divisor_sum(int n). 
You need to write a class called MyCalculator that implements this interface.

#### Requirements:
-The divisor_sum method should take an integer as input and return the sum of all its divisors.
-The class should not be public.
-The maximum value of n is 1000.
-Sample Input: 6
-Sample Output: I implemented: AdvancedArithmetic 12
-Explanation:The divisors of 6 are 1, 2, 3, and 6. The sum of these divisors is 12.

##### Approach:
-Interface Definition:
The AdvancedArithmetic interface contains the method int divisor_sum(int n).

-Class Implementation:
Implement the interface AdvancedArithmetic in the class MyCalculator.
Override the divisor_sum method to calculate the sum of all divisors of n.

-Output:
Use getClass().getInterfaces()[0].getName() to display the name of the implemented interface.
Call the divisor_sum method and print its result.

