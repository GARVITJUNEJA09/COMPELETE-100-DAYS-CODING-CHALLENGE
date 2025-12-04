//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Find the largest number using if-else logic

    // Check if num1 is the largest
    if (num1 >= num2 && num1 >= num3) {
        printf("\nThe largest number is: %d\n", num1);
    } 
    // Check if num2 is the largest
    else if (num2 >= num1 && num2 >= num3) {
        printf("\nThe largest number is: %d\n", num2);
    } 
    // If neither num1 nor num2 is the largest, num3 must be the largest
    else {
        printf("\nThe largest number is: %d\n", num3);
    }

    return 0;
}