//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n;                 // The number whose factorial we want to calculate
    long long factorial = 1; // Initialize the value to 1 so that it does not contain garbage.
    int i;                 

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Get input and handle errors for negative or invalid input
    if ( n < 0) {
        printf("ERROR: Invalid input. Please enter a non-negative integer (0 or greater).\n");
        return 1;
    }

    // Special case for 0! = 1
    if (n == 0) {
        printf("The factorial of 0 is 1.\n");
        return 0;
    }

    // The factorial n! is the product of all integers from 1 up to n.
    for (i = 1; i <= n; i++) {
        // Multiply the current factorial value by the loop counter 'i'
        factorial *= i; // Shorthand for: factorial = factorial * i;
    }

    // Output the result
    printf("The factorial of %d is: %lld\n", n, factorial);

    return 0;
}