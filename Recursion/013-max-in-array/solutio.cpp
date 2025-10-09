#include<bits/stdc++.h>
using namespace std;

int maxinarr( vector<int> &arr, int i){
    int n = arr.size();
    //base case
    if( i = n-1) return arr[i];

   
   return max( arr[i], maxinarr(arr, i+1) );
    
}

int main(){
    int n;
    cin >> n;
   

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << maxinarr( arr, 0);
    
    
    return 0;
}
