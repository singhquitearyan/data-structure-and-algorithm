//Author: Aryan Singh
//Date: 17/01/16
//Description: we are using the most optimized way here to swap the arrrays, same way we can also swap the stings.

#include <iostream>
using namespace std;

void reverseArray(int arr[], int left, int right) {
    // Base case
    if (left >= right)
        return;

    // Swap left and right elements
    swap(arr[left], arr[right]);

    // Move pointers inward
    reverseArray(arr, left + 1, right - 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
