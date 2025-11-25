//Author: Aryan Singh
//Date: 23/09/25
//Description: count the ways to reach the top


#include<bits/stdc++.h>
using namespace std;

int stairs(int n){
    if(n < 0) return 0;
    if(n == 0) return 1;
    return stairs(n-1) + stairs(n-2);
    // (n-1) for bcoz you came from the previous step
    // (n-2) for bcoz you came from the previous previous steps
}
int main(){
    int n;
    cin >> n;
    cout << stairs(n);
    return 0;
}
