/*Write a program to print the following pattern:
5
45
345
2345
12345
*/
#include <stdio.h>

int main() {
    int rows=5;
    int i, j;
   printf("\n--- Pattern ---\n");

    // Outer loop controls the rows (i goes from 1 to 5)
    for (i = 1; i <= rows; i++) {
        
        // Inner loop controls the columns (the numbers printed)
        // j starts at (rows - i + 1) and counts up to 'rows'
        for (j = rows - i + 1; j <= rows; j++) {
            
            // Print the current column number 'j'
            printf("%d", j);
        }
        
        // Move to the next line after the row is complete
        printf("\n");
    }

    return 0;
}