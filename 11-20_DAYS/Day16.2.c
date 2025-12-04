//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, reversed_n = 0, original_n;

    printf("Enter an integer: ");

    // Input validation
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Store the original number to compare with the reversed number later.
    original_n = n;

    // We only check positive numbers, as the concept is complex for negative numbers.
    if (n < 0) {
        printf("%d is not a palindrome (we only check non-negative numbers for simplicity).\n", original_n);
        return 0;
    }
    
        while (n != 0) {
        // 1. Get the last digit (Remainder when divided by 10)
        int remainder = n % 10;
        
        // 2. Build the reversed number: shift previous digits left (multiply by 10) 
        //    and add the new last digit.
        reversed_n = reversed_n * 10 + remainder;
        
        // 3. Remove the last digit from the original number (Integer division by 10)
        n /= 10;
    }

   //to check the numbers
    if (original_n == reversed_n) {
        printf("%d is a palindrome number.\n", original_n);
    } else {
        printf("%d is NOT a palindrome number.\n", original_n);
    }

    return 0;
}