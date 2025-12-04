//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int n, original_n, last_digit;
    int i;
    int factorial;
    long sum_of_factorials = 0; // The single 'long' variable

    // 1. Get the number from the user
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    original_n = n;

    // 2. Loop through each digit of the number
    while (n > 0) {
        
        // Extract the last digit
        last_digit = n % 10;
        
        // Calculate the factorial of the last digit
        factorial = 1;
        for (i = 1; i <= last_digit; i++) {
            factorial = factorial * i;
        }
        
        // Add the factorial to the running sum
        sum_of_factorials = sum_of_factorials + factorial;
        
        // Move to the next digit
        n = n / 10;
    }

    // 3. Check the condition for a strong number
    if (sum_of_factorials == original_n) {
        printf("%d is a STRONG number.\n", original_n);
    } else {
        printf("%d is NOT a strong number (Sum of factorials: %ld).\n", original_n, sum_of_factorials);
    }

    return 0;
}