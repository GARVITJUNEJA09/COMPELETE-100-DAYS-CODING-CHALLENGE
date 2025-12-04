//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n; 
    long power_of_10 = 1; // Used for place value (the single long variable)
    
    int num, first_digit, last_digit, swapped_num; 
    
    // 1. Get the number from the user
    printf("Enter a whole number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle single-digit or zero inputs
    if (n >= -9 && n <= 9) {
        printf("\n--- Result ---\n");
        printf("The number is a single digit. Swap result: %d\n", n);
        return 0;
    }
    
    // Use the positive version for calculation
    num = n;
    if (num < 0) {
        num = -num;
    }

    // 2. Extract the last digit
    last_digit = num % 10;
    
    // Find the first digit and its place value (power_of_10)
    int temp = num;
    while (temp >= 10) {
        temp = temp / 10;
        power_of_10 = power_of_10 * 10;
    }
    first_digit = temp; // The remaining value is the first digit
    
    // 3. Calculate the middle part
    // Removes first digit (num % power_of_10), then removes last digit (/ 10)
    int middle_part = (int)((num % power_of_10) / 10); 

    // 4. Construct the new number (Swap)
    // New Num = (Last Digit * Place Value) + (Middle Part * 10) + First Digit
    swapped_num = (int)(last_digit * power_of_10) + (middle_part * 10) + first_digit;

    // 5. Reapply the sign
    if (n < 0) {
        swapped_num = -swapped_num;
    }

    // 6. Print the result
  printf("Swapped number: %d\n", swapped_num);

    return 0;
}