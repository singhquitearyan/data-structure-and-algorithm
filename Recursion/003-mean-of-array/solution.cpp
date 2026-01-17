//Author: Aryan Singh
//Date: 16/01/2026
//Description:
int sumArray(int arr[], int n) {
    if (n == 0)
        return 0;

    return arr[0] + sumArray(arr + 1, n - 1);
}

// Function to find mean
double meanArray(int arr[], int n) {
    int sum = sumArray(arr, n);
    return (double)sum / n;
}
