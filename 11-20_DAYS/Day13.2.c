//Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n,i;
   
     printf("Enter a positive integer (n): ");
     scanf("%d", &n);

    // Get input from the user and check for errors
    if ( n <= 0) {
        printf("ERROR: Invalid input. Please enter a number greater than 0.\n");
        return 1;
    }

    printf("\nNumbers from 1 to %d:\n", n);

    // Use 'i' to iterate and print the numbers
    // The loop starts at i=1 and continues as long as i <= n.
    for (i = 1; i <= n; i++) {
        printf("%d\n", i); // Print the current value of i
    }

    return 0;
}