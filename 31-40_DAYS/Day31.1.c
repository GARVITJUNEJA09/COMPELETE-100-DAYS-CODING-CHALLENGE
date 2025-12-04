//Reverse an array without taking extra space.
#include <stdio.h>

int main() {
    int size;
    int search_value;
    int i;
    int position = -1; 

    // 1. Get the size of the array from the user
    printf("Enter the number of elements in the list: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid size. Exiting.\n");
        return 1;
    }
    
    // Declare the array based on the user's input size (Variable Length Array - VLA)
    int arr[size]; 

    // 2. Read elements into the array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get the element to search for
    printf("\nEnter the number you want to find: ");
    scanf("%d", &search_value);

    // 4. Search the array one by one (Linear Search)
    for (i = 0; i < size; i++) {
        
        // Compare the current element (arr[i]) with the target value
        if (arr[i] == search_value) {
            position = i; // Found it! Save the index
            break;       // Stop searching
        }
    }

    // 5. Show the result
    printf("\n--- Search Result ---\n");
    if (position != -1) {
        printf("The number %d was found at position (index): %d\n", search_value, position);
    } else {
        printf("The number %d was NOT found in the list.\n", search_value);
    }

    return 0;
}