//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    
    // 1. Get the number of terms
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // 2. Loop through each term from 1 up to n
    for (i = 1; i <= n; i++) {
        
        // Calculate the numerator (1, 3, 5, 7, ...)
        double numerator = (double)(2 * i - 1);
        
        // Calculate the denominator (2, 4, 6, 8, ...)
        double denominator = (double)(2 * i);
        
        // Add the term (fraction) to the running sum
        sum = sum + (numerator / denominator);
    }

    // 3. Print the result
    printf("\n--- Result ---\n");
    printf("Sum of the series up to %d terms: %.6lf\n", n, sum);

    return 0;
}