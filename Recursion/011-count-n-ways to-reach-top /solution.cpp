//Author: Aryan Singh
//Date: 23/09/25
//Description: count the ways to reach the top


#include<bits/stdc++.h>
using namespace std;

int stairs(int n){
    if(n == 1 || n == 2) return n;
    return stairs(n-1) + stairs(n-2);
}
int main(){
    int n;
    cin >> n;
    cout << stairs(n);
    return 0;
}
