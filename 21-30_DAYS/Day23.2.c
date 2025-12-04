/*Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/
#include <stdio.h>

int main() {
    int rows;
    int cols = 5; 
    int i, j;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input. Using default 4 rows.\n");
        rows = 4;
    }

    printf("\n--- Pattern ---\n");

    // Outer loop controls the rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop controls the columns (fixed at 5, using 'cols')
        for (j = 1; j <= cols; j++) {
            
            // Print a star without a newline
            printf("*");
        }
        
        // Move to the next line after the row is complete
        printf("\n");
    }

    return 0;
}
