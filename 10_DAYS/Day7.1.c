//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int year;

    // Get input from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year check logic using conditional statements (if-else if-else)
    
    // A year is a leap year if it is divisible by 400
    if (year % 400 == 0) {
        printf("\n%d is a LEAP YEAR.\n", year);
    } 
    // OR if it is divisible by 4 AND NOT divisible by 100
    else if ((year % 4 == 0) && (year % 100 != 0)) {
        printf("\n%d is a LEAP YEAR.\n", year);
    } 
    // Otherwise, it is NOT a leap year
    else {
        printf("\n%d is NOT a leap year.\n", year);
    }

    return 0;
}