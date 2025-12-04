/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following 
criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/
#include <stdio.h>

int main() {
    int percentage;

    // 1. Get input from the user
    printf("Enter the student's percentage (0-100): ");
    scanf("%d", &percentage);

    // 2. Validate input
    if (percentage < 0 || percentage > 100) {
        printf("\nError: Invalid percentage entered. Please enter a value between 0 and 100.\n");
    } 
    // 3. Assign grade based on criteria using if-else if ladder
    else if (percentage >= 90) {
        // 90 to 100
        printf("\nGrade: A\n");
    } else if (percentage >= 80) {
        // 80 to 89
        printf("\nGrade: B\n");
    } else if (percentage >= 70) {
        // 70 to 79
        printf("\nGrade: C\n");
    } else if (percentage >= 60) {
        // 60 to 69
        printf("\nGrade: D\n");
    } else {
        // Below 60 (0 to 59)
        printf("\nGrade: F\n");
    }

    return 0;
}