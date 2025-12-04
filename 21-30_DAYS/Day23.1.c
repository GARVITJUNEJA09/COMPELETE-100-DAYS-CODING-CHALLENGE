//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    
    // Get the number of terms
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Loop through each term from 1 up to n
    for (i = 1; i <= n; i++) {
        
        // Calculate the term: (2*i) / (4*i - 1)
        // Casting to double ensures floating-point division is performed
        sum = sum + (double)(2 * i) / (4 * i - 1);
    }

    // Print the result
    printf("\n--- Result ---\n");
    printf("Sum of the series up to %d terms: %.6lf\n", n, sum);

    return 0;
}