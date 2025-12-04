//Find the maximum and minimum element in an array.
#include <stdio.h>

int main() {
    int arr[10];
    int size = 5;
    int i;
    int max, min;

    // 1. Read elements into the array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Initialize max and min
    // Assume the first element is both the max and min
    max = arr[0];
    min = arr[0];

    // 3. Find max and min by comparing remaining elements
    for (i = 1; i < size; i++) {
        
        // If the current element is greater than the current max, update max
        if (arr[i] > max) {
            max = arr[i];
        }
        
        // If the current element is smaller than the current min, update min
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // 4. Print the results
    printf("\n--- Result ---\n");
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}