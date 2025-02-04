# OOPs Practice: Rectangle Area Calculation using Inheritance in C++

### Coding Platform:
This solution was implemented and tested on **HackerRank** in the "C++ OOPs" section.

### Problem Statement:
Implement the following C++ classes:
1. A class named `Rectangle` with two integer data fields: `width` and `height`. The class should have a method `display()` to print the `width` and `height` separated by a space.
2. A class named `RectangleArea` that inherits from the `Rectangle` class. This class should:
   - Have a method `read_input()` to read the `width` and `height` values from the user.
   - Override the `display()` method to print the area of the rectangle.

#### Requirements:
- Your `Rectangle` class should have `width` and `height` as private data members.
- Your `RectangleArea` class should be derived from `Rectangle` and must override the `display()` method to compute and print the area.
- The program should read the dimensions of the rectangle and display:
  - The `width` and `height` of the rectangle on the first line.
  - The area of the rectangle on the second line.

#### Sample Input:
10 5
#### Sample Output:
10 5 50

#### Explanation:
- The given input is the `width` = 10 and `height` = 5.
- The area of the rectangle is calculated as `width * height = 10 * 5 = 50`.

### Approach

1. **Class Definition**:
   - Define a `Rectangle` class with `width` and `height` data members.
   - Include a method `display()` to print the `width` and `height`.
   
2. **Class Inheritance**:
   - Define the `RectangleArea` class which inherits from the `Rectangle` class.
   - Add a method `read_input()` to read the `width` and `height` from the user.
   - Override the `display()` method to print the area of the rectangle.

3. **Reading Input**:
   - Use `cin` to read the `width` and `height` values in the `read_input()` method.

4. **Method Overloading**:
   - Override the `display()` method in the `RectangleArea` class to calculate the area and print it.

5. **Output**:
   - The first output line prints the `width` and `height`.
   - The second output line prints the area.

---
