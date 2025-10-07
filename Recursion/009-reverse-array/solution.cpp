#include<bits/stdc++.h>
using namespace std;
void arrayrev( vector<int>& arr, int i){
    int n = arr.size();

    if( i >= n-i-1)
    return;

    swap(arr[i], arr[n-i-1]);
    arrayrev( arr, i+1);
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    arrayrev(arr, 0);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}
