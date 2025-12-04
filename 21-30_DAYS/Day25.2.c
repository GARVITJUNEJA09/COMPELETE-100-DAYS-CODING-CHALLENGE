/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
    * 
    */
   #include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    // Outer loop controls the rows (lines to be printed)
    for (i = 1; i <= rows; i++) {
        
        // 1. Loop to print leading spaces
        // The number of spaces increases with the row number (i-1)
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        
        // 2. Loop to print stars
        // The number of stars decreases in each row (rows - i + 1)
        for (j = i; j <= rows; j++) {
            printf("*");
        }
        
        // Move to the next line after the row is complete
        printf("\n");
    }

    return 0;
}