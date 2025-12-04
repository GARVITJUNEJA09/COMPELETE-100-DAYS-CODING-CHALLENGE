//Read and print elements of a one-dimensional array.
#include <stdio.h>

int main() {
    int arr[10];
    int size = 5; // We'll read 5 elements for this example
    int i;

    // 1. Read elements into the array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Print elements from the array
    printf("\n Array Elements :- \n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}