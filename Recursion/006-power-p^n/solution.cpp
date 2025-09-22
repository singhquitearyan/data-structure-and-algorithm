//Author: Aryan Singh
//Date: 22/09/25
//Description: Power (N^P)
#include<bits/stdc++.h>
using namespace std;

int power(int p, int n){
if(p == 0) return 1;
return n * power(p-1, n);


}
int main(){
    int n , p;
    cin >> n;
    cin >> p;
    cout << power(p, n);
    return 0;
}
