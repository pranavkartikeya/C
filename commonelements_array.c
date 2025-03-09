#include <stdio.h>

void commonelements(int arr1[], int arr2[], int n1, int n2) {
    int result[10];  // Stores common elements (Assuming max 10 elements)
    int k = 0;       // Index for result array

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr2[j] == arr1[i]) {  // If element is found in both arrays
                int flag = 0;  // Initialize flag inside the loop
                
                // Check for duplicates in the result array
                for (int x = 0; x < k; x++) {
                    if (result[x] == arr2[j]) {
                        flag = 1;  // Mark as duplicate
                        break;
                    }
                }

                // If not a duplicate, add to result and print
                if (flag == 0) {
                    result[k] = arr2[j];
                    printf("%d ", result[k]);
                    k++;
                }
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {2, 7, 8, 9, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Common elements: ");
    commonelements(arr1, arr2, n1, n2);

    return 0;
}
