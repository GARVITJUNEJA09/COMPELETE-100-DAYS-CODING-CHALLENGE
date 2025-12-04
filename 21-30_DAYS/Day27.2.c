/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *                       */
#include <stdio.h>

int main() {
    int rows = 4; 
    int i, j, space;

    printf("--- Pattern ---\n");

    // 1. Upper Half 
    for (i = 1; i <= rows; i++) {
        
        // Loop for leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // Loop for stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    // 2. Lower Half 
    for (i = rows - 1; i >= 1; i--) {
        
        // Loop for leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // Loop for stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}