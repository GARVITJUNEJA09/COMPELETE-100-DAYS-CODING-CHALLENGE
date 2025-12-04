//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;                 // Enter the numbers you want to multiplt till.
    long long int product = 1; // initialized to 1. So it does not contain any garbage value.
    int i;                 // Loop counter

    printf("Enter the numbers till you want to multiply (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("ERROR: Invalid input. Please enter a positive integer (n >= 1).\n");
        return 1;
    }
    
    // Check if there are any even numbers in the range
    if (n < 2) {
        printf("There are no even numbers between 1 and %d.\n", n);
        printf("Total Product: 1\n");
        return 0;
    }
    
    printf("Even numbers being multiplied: ");

    // Loop starts at i=2 and increments by 2 to ensure we only process even numbers.
    for (i = 2; i <= n; i = i + 2) {
        
        printf("%d", i); // Print the current even number
        
        if (i + 2 <= n) {
            printf(", "); 
        }
        
        product *= i; 
    }
    
    printf("\nTotal Product: %lld\n", product);

    return 0;
}