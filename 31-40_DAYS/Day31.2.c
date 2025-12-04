//Reverse an array without taking extra space.
#include <stdio.h>

int main() {
    int size;
    int i;
    int temp; // The temporary variable needed for swapping

    // 1. Get the size of the array
    printf("Enter the number of elements: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid size. Exiting.\n");
        return 1;
    }
    
    // Declare the array based on the user's input size
    int arr[size]; 

    // 2. Read elements into the array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Reverse the array IN-PLACE (Swapping elements)
    // The loop runs only up to the middle of the array (size / 2)
    for (i = 0; i < size / 2; i++) {
        
        // a. Store the element from the start (left side)
        temp = arr[i];
        
        // b. Replace the start element with the corresponding end element
        arr[i] = arr[size - 1 - i];
        
        // c. Replace the end element with the stored start element
        arr[size - 1 - i] = temp;
    }

    // 4. Print the reversed array
    printf("\n Reversed Array :-\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}