//Merge two arrays.
#include <stdio.h>

int main() {
    int size1, size2;
    int merged_size;
    int i; 

    // 1. Get size for Array 1
    printf("Enter the size of Array 1: ");
    if (scanf("%d", &size1) != 1 || size1 <= 0) {
        printf("Invalid size. Exiting.\n");
        return 1;
    }

    // 2. Get size for Array 2
    printf("Enter the size of Array 2: ");
    if (scanf("%d", &size2) != 1 || size2 <= 0) {
        printf("Invalid size. Exiting.\n");
        return 1;
    }
    
    // Calculate total size
    merged_size = size1 + size2;
    
    // Declare arrays dynamically using the input sizes
    int arr1[size1];
    int arr2[size2];
    int merged_arr[merged_size]; 

    // 3. Read elements for Array 1
    printf("Enter %d integers for Array 1:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // 4. Read elements for Array 2
    printf("Enter %d integers for Array 2:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // 5. Copy Array 1 into the merged array
    for (i = 0; i < size1; i++) {
        merged_arr[i] = arr1[i];
    }
    
    // 6. Copy Array 2 into the merged array
    // Start writing into the merged array at index 'size1'
    for (i = 0; i < size2; i++) {
        // merged_arr index is current length of arr1 + current index of arr2
        merged_arr[size1 + i] = arr2[i];
    }

    // 7. Print the final merged array
    printf("\n Merged Array :-\n");
    for (i = 0; i < merged_size; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}