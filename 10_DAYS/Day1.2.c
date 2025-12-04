//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    // Declare all variables as 'int' (integers)
    int num1, num2;
    int sum, difference, product,quotient;
    

    // 1. Get Input
    printf("Enter the first whole number: ");
    scanf("%d", &num1);

    printf("Enter the second whole number: ");
    scanf("%d", &num2);

    // 2. Perform Calculations
    sum = num1 + num2;        // Addition
    difference = num1 - num2; // Subtraction
    product = num1 * num2;    // Multiplication

    // 3. Display Results
    printf("\n--- Calculation Results ---\n");
    printf("Sum:         %d + %d = %d\n", num1, num2, sum);
    printf("Difference:  %d - %d = %d\n", num1, num2, difference);
    printf("Product:     %d * %d = %d\n", num1, num2, product);
    
    // 4. Handle Division with a check for zero
    printf("Quotient:    %d / %d = ", num1, num2);
    
    if (num2 != 0) {
        // If the second number is NOT zero, perform the integer division
         quotient = num1 / num2;
        printf("%d\n", quotient);
    } else {
        // If the second number IS zero, print an error message
        printf("Cannot divide by zero!\n");
    }

    return 0;
}