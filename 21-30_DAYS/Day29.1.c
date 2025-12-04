//Find the sum of array elements.
#include <stdio.h>

int main() {
    int arr[10];
    int size = 5;
    int sum = 0;
    int i;

    // 1. Read elements and find the sum simultaneously
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        
        // Add the newly read element to the running sum
        sum = sum + arr[i];
    }

    // 2. Print the final sum
   printf("\nThe sum of the array elements is: %d\n", sum);

    return 0;
}