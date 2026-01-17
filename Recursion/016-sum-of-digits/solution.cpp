//Author: Aryan Singh
//Date: 17/01/26
//Description: 

#include <bits/stdc++.h> 
using namespace std;

int sum_of_digit(int n) 
{ 
    if (n == 0) 
    return 0; 
    return (n % 10 + sum_of_digit(n / 10)); 
} 

int main() 
{ 
    int num = 12345; 
    int result = sum_of_digit(num); 
    cout << result << endl; 
    return 0; 
}
