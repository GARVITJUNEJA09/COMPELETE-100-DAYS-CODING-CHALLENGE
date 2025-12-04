//Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int arr[10];
    int size = 5;
    int i;
    int even_count = 0;
    int odd_count = 0;

    // 1. Read elements into the array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Count even and odd numbers
    for (i = 0; i < size; i++) {
        
        // Check if the remainder when divided by 2 is 0 (Even)
        if (arr[i] % 2 == 0) {
            even_count = even_count + 1;
        } 
        // Otherwise, the number is Odd
        else {
            odd_count = odd_count + 1;
        }
    }

    // 3. Print the results
    printf("\n--- Result ---\n");
    printf("Total Even Numbers: %d\n", even_count);
    printf("Total Odd Numbers: %d\n", odd_count);

    return 0;
}