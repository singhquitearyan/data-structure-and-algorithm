//Author: Aryan Singh
//Date: 18/01/26
//Description: we're using t=wo ways here - 1st one is basic through modulo and divison 
//and second one is through bit manipulation

//METHOD-1
int countSetBits(int n) {
    if(n == 0)
        return 0;

    return (n % 2) + countSetBits(n / 2);
}


//METHOD-2
int countSetBits(int n) {
    if(n == 0)
        return 0;

    return (n & 1) + countSetBits(n >> 1);
}
// // (n & 1) :-
// Checks the last (rightmost) bit of n
// If last bit is 1 → result is 1
// If last bit is 0 → result is 0

// (n >> 1) :-
// Right shift by 1 bit
// Removes the last bit

//hOW IT WORKS?
// countSetBits(13)
//  → 1 + countSetBits(6)
//      → 0 + countSetBits(3)
//          → 1 + countSetBits(1)
//              → 1 + countSetBits(0)
//                  → 0
