#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *ptr, *ptr1;

    printf("Enter n: ");
    scanf("%d", &n);

    // Allocating memory using calloc
    ptr = (int*)calloc(n, sizeof(int));
   // or ptr=(int*)malloc(n*sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    printf("Original values: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    // Reallocate memory
    ptr1 = (int*)realloc(ptr, 7 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Reallocation failed\n");
        free(ptr); // Free the old allocated memory
        return 1;
    }

    ptr = ptr1;  // Update ptr to the new memory location

    printf("\nEnter additional values: ");
    for (int i = n; i < 7; i++) { // Only read new values
        scanf("%d", (ptr + i));
    }

    printf("Updated values: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", *(ptr + i));
    }

    free(ptr); // Free allocated memory

    return 0;
}
