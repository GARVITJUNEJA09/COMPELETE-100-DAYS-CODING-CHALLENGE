/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*                       */
#include <stdio.h>

int main() {
    int num_repeats; // Number of times to repeat the whole pattern
    int repeat_count; // Outer loop counter
    int i;           // Inner loop counter

    // 1. Get the number of repetitions
    printf("How many times do you want to repeat the pattern? ");
    if (scanf("%d", &num_repeats) != 1 || num_repeats <= 0) {
        printf("Invalid input. Repeating 2 times.\n");
        num_repeats = 2;
    }

    printf("\n--- Pattern Repeat ---\n");

    // Outer loop: Repeats the entire pattern block
    for (repeat_count = 1; repeat_count <= num_repeats; repeat_count++) {
        
        // Group 1: 1 Star
        printf("*\n");
        printf("\n"); // Blank line

        // Group 2: 3 Stars
        for (i = 1; i <= 3; i++) {
            printf("*\n");
        }
        printf("\n"); // Blank line

        // Group 3: 5 Stars
        for (i = 1; i <= 5; i++) {
            printf("*\n");
        }
        printf("\n"); // Blank line

        // Group 4: 3 Stars
        for (i = 1; i <= 3; i++) {
            printf("*\n");
        }
        printf("\n"); // Blank line

        // Group 5: 1 Star
        printf("*\n");
        
        // Optional: Print a clearer separator between full patterns
        if (repeat_count < num_repeats) {
            printf("------ END OF REPEAT %d ------\n", repeat_count);
            printf("\n");
        }
    }

    return 0;
}
