//Author: Aryan Singh
//Date:17/01/26
//Description: 

//FOR SHORTER INTEGRS
void decimalToBinary(int n) {
    if (n == 0)
        return;

    decimalToBinary(n / 2);
    cout << n % 2;
}



//FOR LARGER INTEGERS
#include <iostream>
#include <vector>
using namespace std;

void decimalToBinary(long long n, vector<bool>& bits) {
    if (n == 0)
        return;

    decimalToBinary(n / 2, bits);
    bits.push_back(n % 2);   // store as bool (0 or 1)
}

int main() {
    long long n = 123456789012345LL;
    vector<bool> bits;

    if (n == 0)
        bits.push_back(0);
    else
        decimalToBinary(n, bits);

    // print binary
    for (bool b : bits)
        cout << b;

    return 0;
}
