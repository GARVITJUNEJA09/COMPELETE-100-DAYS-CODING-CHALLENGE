//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    long long number;
    
    // 1. Get the number
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Prepare the number for the loop
    long long current_num = number;
    if (current_num < 0) {
        current_num = -current_num;
    }

    long long product = 1;
    int found_odd = 0; // 0 means no odd digits found yet

    // 2. Loop through all the digits
    while (current_num > 0) {
        
        // Get the last digit
        int digit = current_num % 10;
        
        // Check if the digit is odd
        if (digit % 2 != 0) {
            
            // If odd, multiply it into the product
            product = product * digit;
            found_odd = 1; // Set flag to show we found an odd digit
        }
            
        // Remove the last digit
        current_num = current_num / 10;
    }

    // 3. Show the result
    if (found_odd) {
        printf("Product of odd digits in %lld: %lld\n", number, product);
    } else {
        printf("No odd digits found in %lld. Product is 0.\n", number);
    }

    return 0;
}