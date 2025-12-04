//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int number;
    int temp;
    int bit_value = 1;

    printf("Enter a non-negative integer: ");

    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Invalid input. Please enter a valid non-negative integer.\n");
        return 1;
    }

    if (number == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    printf("Binary representation: ");
    
    // 1. Find the starting power of 2 (MSB position).
    temp = number;
    while (temp > 1) {
        temp /= 2;
        if (temp > 0) {
            bit_value *= 2;
        }
    }

    // 2. Iterate from the highest power of 2 down to 1.
    while (bit_value > 0) {
        if (number >= bit_value) {
            // If the power of 2 fits, the bit is 1.
            printf("1");
            number -= bit_value; // Subtract to move to the remaining value
        } else {
            // Otherwise, the bit is 0.
            printf("0");
        }
        
        // Move to the next smaller power of 2 (e.g., from 8 to 4).
        bit_value /= 2;
    }

    printf("\n");
    return 0;
}