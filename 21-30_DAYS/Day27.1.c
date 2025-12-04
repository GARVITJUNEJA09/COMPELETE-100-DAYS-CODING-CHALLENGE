/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
    */
   
#include <stdio.h>

int main() {
    int max_rows = 9; // Defines the widest row
    int i, j;

    printf("--- Pattern ---\n");

    // 1. Upper Half (Increasing Rows: 1, , 3, , 5 stars)
    for (i = 1; i <= max_rows; i=i+2) {
        
        // Prints 'i' stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    // 2. Lower Half (Decreasing Rows:  3 ,1 stars)
    // Starts from max_rows - 1 to avoid duplicating the widest line
    for (i = max_rows - 2; i >= 1; i=i-2) {
        
        // Prints 'i' stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}