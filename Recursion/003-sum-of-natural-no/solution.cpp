//Author: Aryan SIngh
// Date: 22/09/25
//Description: Sum of the n natural no.


#include<bits/stdc++.h>
using namespace std;

int sumrec(vector<int>& arr, int n){
    
    if(n == 0) return 0;
    return arr[n-1] + sumrec(arr, n-1);
    
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = sumrec(arr, n);
    cout << sum;
    return 0;
}
