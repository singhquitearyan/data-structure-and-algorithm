//Author: Aryan Singh
//Date: 20/01/26
//Description: First of all find the fibonacci and then write a function to print in reverse order. its basically go to the deep in and then print while coming back. 

#include <bits/stdc++.h>
using namespace std;

// Recursive function to generate fibonacci numbers
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

// Function to print fibonacci in reverse using recursion
void printReverseFib(int n) {
    if (n < 0)
        return;

    cout << fib(n) << " ";
    printReverseFib(n - 1);
}

int main() {
    int n = 6;  // number of terms
    printReverseFib(n - 1);
    return 0;
}


// //WORKING:

// printReverseFib(5)
//  → fib(5) = 5 → print 5
//  → printReverseFib(4)

// printReverseFib(4)
//  → fib(4) = 3 → print 3
//  → printReverseFib(3)

// printReverseFib(3)
//  → fib(3) = 2 → print 2
//  → printReverseFib(2)

// printReverseFib(2)
//  → fib(2) = 1 → print 1
//  → printReverseFib(1)

// printReverseFib(1)
//  → fib(1) = 1 → print 1
//  → printReverseFib(0)

// printReverseFib(0)
//  → fib(0) = 0 → print 0
//  → printReverseFib(-1) → stop
