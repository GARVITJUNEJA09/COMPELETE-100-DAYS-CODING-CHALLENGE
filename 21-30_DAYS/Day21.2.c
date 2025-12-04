//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int n;          // The number entered by the user
    int i;        
    int sum = 0;    // Accumulator for the sum of divisors
    
    // 1. Get the number from the user
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // 2. Loop to find all proper divisors and sum them
    // We check every number 'i' from 1 up to (n - 1)
    for (i = 1; i < n; i++) {
        
        // Check if 'i' divides 'n' with no remainder
        if (n % i == 0) {
            // 'i' is a proper divisor, so add it to the sum
            sum = sum + i;
        }
    }

    // 3. Check the condition for a perfect number
    if (sum == n) {
        printf("%d is a PERFECT number.\n", n);
    } else {
        printf("%d is NOT a perfect number (Sum of divisors: %d).\n", n, sum);
    }

    return 0;
}