//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main() {
    int number;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    // A number is even if the remainder when divided by 2 is 0.
    // The modulo operator (%%) gives the remainder.
    if (number % 2 == 0) {
        printf("\n%d is an EVEN number.\n", number);
    } else {
        printf("\n%d is an ODD number.\n", number);
    }

    return 0;
}