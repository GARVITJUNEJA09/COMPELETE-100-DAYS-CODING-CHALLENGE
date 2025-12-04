//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int current_size; // The number of elements currently in the array (N)
    int new_value;
    int i;
    int insertion_pos;

    // 1. Get the current number of elements
    printf("Enter the number of elements already in the sorted list: ");
    if (scanf("%d", &current_size) != 1 || current_size <= 0) {
        printf("Invalid size. Exiting.\n");
        return 1;
    }
    
    // Declare the array to hold the current elements + 1 slot for the new element (VLA)
    int arr[current_size + 1]; 

    // 2. Read sorted elements
    printf("Enter %d integers IN ASCENDING ORDER:\n", current_size);
    for (i = 0; i < current_size; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get the value to insert
    printf("\nEnter the value to insert: ");
    scanf("%d", &new_value);

    // 4. Find the insertion position and shift elements
    // Start from the last current element (current_size - 1) and move backward
    for (i = current_size - 1; i >= 0; i--) {
        // If the current element is larger, shift it right
        if (arr[i] > new_value) {
            arr[i + 1] = arr[i]; 
        } else {
            // Stop when we find an element smaller than or equal to the new value
            break; 
        }
    }
    
    // The correct position is always one index past where the loop stopped
    insertion_pos = i + 1;

    // 5. Insert the new value and update size
    arr[insertion_pos] = new_value;
    current_size = current_size + 1; // The array is now one element longer

    // 6. Print the updated array
    printf("\n--- Array After Insertion ---\n");
    for (i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}