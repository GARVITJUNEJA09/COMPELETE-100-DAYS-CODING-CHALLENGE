/*Write a program to print the following pattern:
*
**
***
****
*****
*/
#include <stdio.h>

int main() {
    int rows=5;
    int i, j;

    printf("\n--- Pattern ---\n");

    // Outer loop controls the rows (lines to be printed)
    for (i = 1; i <= rows; i++) {
        
        // Inner loop controls the columns (stars in the current row)
        // The inner loop runs 'i' times (equal to the current row number)
        for (j = 1; j <= i; j++) {
            
            // Print a star without a newline
            printf("*");
        }
        
        // Move to the next line after the row is complete
        printf("\n");
    }

    return 0;
}