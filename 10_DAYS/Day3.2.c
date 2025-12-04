//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b;
    int temp; // The third variable used for swapping

    // Get input from the user
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Display values BEFORE swapping
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Perform the swap using the third variable (temp)
    
    // Step 1: Store the value of 'a' in 'temp'
    temp = a;
    
    // Step 2: Assign the value of 'b' to 'a'
    a = b;
    
    // Step 3: Assign the original value of 'a' (now stored in 'temp') to 'b'
    b = temp;

    // Display values AFTER swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}