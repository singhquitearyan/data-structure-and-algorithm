//Author: aryan singh
//date: 22/09/25
//descriptio: factorial

#include<bits/stdc++.h>
using namespace std;

int fact(int n){

    if(n==1) return 1;

    int fatori = n * fact( n-1);
    return fatori;
}
int main(){
    int n;
    cin >> n;
    
   
    int factorial = fact( n);
    cout << factorial;
    return 0;
}
