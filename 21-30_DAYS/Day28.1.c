//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, num, i;
    int is_prime;

    // Get the upper limit
    printf("Enter the number till you want to get the prime numbers: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input. Please enter a number greater than 1.\n");
        return 1;
    }

    printf("\nPrime numbers up to %d are:\n", n);

    // Outer loop: Check every number from 2 up to n
    for (num = 2; num <= n; num++) {
        
        is_prime = 1; // Assume the number is prime until proven otherwise

        // Inner loop: Check for divisors from 2 up to num/2
        for (i = 2; i <= num / 2; i++) {
            
            // Check for divisibility
            if (num % i == 0) {
                is_prime = 0; // Found a divisor, so it's not prime
                break;       // Stop checking this number and move to the next one
            }
        }

        // If the number is still marked as prime (is_prime == 1)
        if (is_prime == 1) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}