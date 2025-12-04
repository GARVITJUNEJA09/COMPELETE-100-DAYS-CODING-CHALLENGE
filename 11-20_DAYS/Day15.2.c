//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int n,i;                 
    int reversed_number = 0; 
    int remainder;           
    int temp_n;              

    printf("Enter an integer: ");
     i =scanf("%d", &n);

    // Get input from the user
    if (i != 1) {
        printf("ERROR: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Use a temporary variable (temp_n) for the calculation 
    // so we can preserve the original input 'n' for the final output.
    temp_n = n;

    // The loop continues as long as the number being processed is greater than 0.
    while (temp_n != 0) {
        
        // 1. Extract the last digit: (e.g., 123 % 10 gives 3)
        remainder = temp_n % 10;
        
        // 2. Build the reversed number:
        // Shift existing digits left (x10) and add the new digit.
        reversed_number = reversed_number * 10 + remainder;
        
        // 3. Remove the last digit from the number being processed: (e.g., 123 / 10 gives 12)
        temp_n /= 10;
    }

    // Output the result
    printf("Original Number: %d\n", n);
    printf("Reversed Number: %d\n", reversed_number);

    return 0;
}