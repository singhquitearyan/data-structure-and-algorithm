Given an integer n, the task is to print the first n terms of the Fibonacci series in reverse order using Recursion.

Examples:

Input: N = 5
Output: 3 2 1 1 0
Explanation: First five terms are - 0 1 1 2 3. 

Input: N = 10
Output: 34 21 13 8 5 3 2 1 1 0

Approach: The idea is to use recursion in a way that keeps calling the same function again till N is greater than 0 and keeps on adding the terms and after that starts printing the terms. 

Follow the steps below to solve the problem:

Define a function fibo(int N, int a, int b) where
N is the number of terms and
a and b are the initial terms with values 0 and 1.
If N is greater than 0, then call the function again with values N-1, b, a+b.
After the function call, print a as the answer.
