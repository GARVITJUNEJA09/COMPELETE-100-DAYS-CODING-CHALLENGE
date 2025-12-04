//Delete an element from an array.
#include <stdio.h>

int main() {
    int size; 
    int i;
    int delete_pos; // The index of the element to delete

    // 1. Get the size of the array
    printf("Enter the number of elements: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid size. Exiting.\n");
        return 1;
    }
    
    // Declare the array based on the user's input size
    int arr[size]; 

    // 2. Read elements
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get the position to delete
    printf("\nEnter the position (index 0 to %d) to delete: ", size - 1);
    if (scanf("%d", &delete_pos) != 1 || delete_pos < 0 || delete_pos >= size) {
        printf("Invalid position. Deletion failed.\n");
        return 1;
    }

    // 4. Perform the Deletion (The Shift)
    // Loop starts at the position to be deleted and runs until the second-to-last element
    for (i = delete_pos; i < size - 1; i++) {
        
        // Overwrite the current element with the element immediately after it
        arr[i] = arr[i + 1];
    }

    // 5. Update the size (logical deletion)
    size = size - 1;

    // 6. Print the new array
    printf("\n--- Array After Deletion ---\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}