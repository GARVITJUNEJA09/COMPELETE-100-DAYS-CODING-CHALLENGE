//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int arr[10];
    int size = 5;
    int i;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    // 1. Read elements into the array
    printf("Enter %d integers (including positive, negative, and zero):\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Count positive, negative, and zero elements
    for (i = 0; i < size; i++) {
        
        // Check for positive numbers
        if (arr[i] > 0) {
            positive_count = positive_count + 1;
        } 
        // Check for negative numbers
        else if (arr[i] < 0) {
            negative_count = negative_count + 1;
        } 
        // If it's neither > 0 nor < 0, it must be zero
        else {
            zero_count = zero_count + 1;
        }
    }

    // 3. Print the results
    printf("\n--- Result ---\n");
    printf("Positive Count: %d\n", positive_count);
    printf("Negative Count: %d\n", negative_count);
    printf("Zero Count: %d\n", zero_count);

    return 0;
}