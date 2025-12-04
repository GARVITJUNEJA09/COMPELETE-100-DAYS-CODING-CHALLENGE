//Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a, b;

    // Get input from the user
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Display values BEFORE swapping
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Step 1: Sum the two numbers and store the result in 'a'. 
    // a now holds the combined value: a_original + b_original
    a = a + b;
    
    // Step 2: Subtract the original 'b' (which is still stored in b) from the new 'a'.
    // b now holds: (a_original + b_original) - b_original = a_original
    b = a - b;
    
    // Step 3: Subtract the new 'b' (which is now a_original) from 'a'.
    // a now holds: (a_original + b_original) - a_original = b_original
    a = a - b;

    // Display values AFTER swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}