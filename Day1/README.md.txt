# OOPs Practice: Arithmetic and Inheritance in Java

#Coding Platform:
This solution was implemented and tested on **HackerRank** in the "Java OOPs" section.

### Problem Statement:
Implement the following Java classes:
1. A class named `Arithmetic` with a method `add(int a, int b)` that takes two integers as parameters and returns their sum.
2. A class named `Adder` that inherits from the `Arithmetic` class.

#### Requirements:
- Your `add` method should return the sum of the two integers.
- Your classes should not be public.

- The output should include:
  My superclass is: Arithmetic
  42 13 20

##### Approach
1. **Class Definition**:
 - Create an `Arithmetic` class with an `add` method that returns the sum of two integers.
 - Create an `Adder` class that extends `Arithmetic` to inherit its `add` method.
 
2. **Class Inheritance**:
 - `Adder` inherits the `add` method from `Arithmetic` without needing to override it.
 
3. **Superclass Reference**:
 - Use `getClass().getSuperclass().getName()` in the main method to display the superclass name.

4. **Calling the Method**:
 - Create an `Adder` object, and call the inherited `add` method to print the sum of the integers.
 
5. **Output**:
 - Print the name of the superclass followed by the results of three calls to the `add` method with different integer parameters.

---
