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

    // Outer loop controls the rows (i goes from 1 to rows)
    for (i = 1; i <= rows; i++) {
        
        // 1. Loop to print leading spaces
        // The number of spaces is (rows - i)
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // 2. Loop to print the numbers
        // The numbers start at (rows - i + 1) and count up to 'rows'
        for (j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }
        
        // Move to the next line after the row is complete
        printf("\n");
    }

    return 0;
}