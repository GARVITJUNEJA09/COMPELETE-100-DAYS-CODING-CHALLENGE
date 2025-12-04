//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n;
    int sum;

    // Get input for the number of natural numbers (n)
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Input validation: Ensure n is positive
    if (n < 1) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum using the direct formula: n * (n + 1) / 2
    sum = n * (n + 1) / 2;

    // Display the result
    printf("\nThe sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}