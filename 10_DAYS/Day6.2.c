//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int number;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Use nested if-else to check the condition
    if (number > 0) {
        // Condition 1: Number is positive
        printf("\nThe number %d is POSITIVE.\n", number);
    } else {
        // If the number is NOT positive, it must be either negative or zero.
        
        if (number < 0) {
            // Condition 2: Number is negative
            printf("\nThe number %d is NEGATIVE.\n", number);
        } else {
            // Condition 3: If it's neither positive (outer if) nor negative (inner if), it must be zero.
            printf("\nThe number is ZERO.\n");
        }
    }

    return 0;
}