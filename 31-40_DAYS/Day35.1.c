//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int size;
    int i;
    int max1; 
    int max2; 

    // 1. Get the size of the array
    printf("Enter the number of elements (min 2): ");
    if (scanf("%d", &size) != 1 || size < 2) {
        printf("Invalid size. Array must have at least 2 elements. Exiting.\n");
        return 1;
    }

    // Declare the array dynamically
    int arr[size]; 

    // 2. Read elements
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Initialize max1 and max2 using the first two elements
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    // 4. Find the second largest element
    // Start loop from the third element (index 2)
    for (i = 2; i < size; i++) {
        
        // Case 1: Current element is the new largest
        if (arr[i] > max1) {
            max2 = max1; 
            max1 = arr[i]; 
        }
        
        // Case 2: Current element is between max1 and max2
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i]; 
        }
    }

    // 5. Print the result
    printf("\n--- Result ---\n");
    printf("The second largest element is: %d\n", max2);

    return 0;
}
