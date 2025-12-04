//Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int size;
    int search_key;
    int i;
    
    // 1. Get the size of the array
    printf("Enter the number of elements: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid size. Exiting.\n");
        return 1;
    }
    
    // Declare the array based on the user's input size
    int arr[size]; 

    // 2. Read elements (User must enter them in ascending order)
    printf("Enter %d integers IN ASCENDING ORDER:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get the element to search for
    printf("\nEnter the number to find: ");
    scanf("%d", &search_key);

    // Pointers are NOT used. These are simple integer index trackers.
    int low_index = 0;
    int high_index = size - 1;
    int middle_index;
    int found_position = -1;

    // 4. Perform Binary Search
    while (low_index <= high_index) {
        
        // Calculate the middle point
        middle_index = (low_index + high_index) / 2; 

        // Check 1: Key is found
        if (arr[middle_index] == search_key) {
            found_position = middle_index;
            break; 
        } 
        // Check 2: Key is greater (search the right half)
        else if (arr[middle_index] < search_key) {
            low_index = middle_index + 1; 
        } 
        // Check 3: Key is smaller (search the left half)
        else {
            high_index = middle_index - 1;
        }
    }

    // 5. Print the result
    printf("\n Search Result :-\n");
    if (found_position != -1) {
        printf("Element %d found at index: %d\n", search_key, found_position);
    } else {
        printf("Element %d was NOT found in the list.\n", search_key);
    }

    return 0;
}