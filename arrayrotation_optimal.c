#include <stdio.h>

// Function to reverse a portion of the array from 'start' to 'end'
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];  // Swap arr[start] and arr[end]
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the left by 'rot' positions
void arrayrotate(int arr[], int n, int rot) {
    if (rot > n) rot = rot % n;  // Ensure rotation doesn't exceed array length

    reverse(arr, 0, rot - 1);   // Reverse the first 'rot' elements
    reverse(arr, rot, n - 1);   // Reverse the remaining elements
    reverse(arr, 0, n - 1);     // Reverse the whole array
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int rot = 2;

    arrayrotate(arr1, len, rot);

    // Print rotated array
    for (int i = 0; i < len; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}
