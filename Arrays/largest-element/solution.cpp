// Author : Aryan SIngh
// Date: 12/09/25
// Description: Largest element in an array


#include <iostream>
#include <vector>
using namespace std;

int findLargestElement(const vector<int>& arr) {
    int maxElement = arr[0];
    for (int num : arr) {
        if (num > maxElement) {
            maxElement = num;
        }
    }
    return maxElement;
}

int main() {
    vector<int> arr = {10, 20, 5, 30, 25};
    cout << "Largest Element: " << findLargestElement(arr) << endl;
    return 0;
}
