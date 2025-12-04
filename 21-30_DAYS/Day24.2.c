/*Write a program to print the following pattern:
1
12
123
1234
12345
*/
#include <stdio.h>

int main() {
    int rows=5;
    int i, j;

     printf("\n--- Pattern ---\n");

    // Outer loop controls the rows (lines to be printed)
    for (i = 1; i <= rows; i++) {
        
        // Inner loop controls the columns (numbers in the current row)
        // It runs 'i' times
        for (j = 1; j <= i; j++) {
            
            // Print the column number 'j' without a newline
            printf("%d", j);
        }
        
        // Move to the next line after the row is complete
        printf("\n");
    }

    return 0;
}