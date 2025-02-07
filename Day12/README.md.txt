#OOPs Practice: Multi-Class Function Calls in C++
##Coding Platform:This solution was implemented and tested on HackerRank in the "C++ OOPs" section.

###Problem Statement:
You are given four classes: A, B, C, and D.
Each of A, B, and C implements a function func(int &a) that modifies a as follows:

A::func multiplies a by 2
B::func multiplies a by 3
C::func multiplies a by 5
The task is to implement the D class and its update_val(int new_val) function, which updates D's val to new_val only by calling the func methods from A, B, and C.

-Input Constraints:
new_val will only have 2, 3, and 5 as its prime factors.
val starts at 1.
Expected Output:
For each call to a function in A, B, or C, print the number of times it was called.
A's func will be called once.
B's func will be called once.
C's func will be called once.

Explanation:
Initially, val = 1
Calling A::func once (val *= 2 → val = 2)
Calling B::func once (val *= 3 → val = 6)
Calling C::func once (val *= 5 → val = 30)


##Approach:
Class Definitions:

Create A, B, and C, each containing:
A func(int &a) method that modifies a.
A callCounter to track the number of times func is called.
A getA(), getB(), and getC() method to retrieve call counts.

Class D Implementation:

Initialize val = 1 in D's constructor.
Implement update_val(int new_val):
Call A::func while val can be multiplied by 2.
Call B::func while val can be multiplied by 3.
Call C::func while val can be multiplied by 5.
Print the number of calls made to each function.