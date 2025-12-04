/*Write a program to classify a triangle as 
Equilateral, Isosceles, or Scalene based on its side lengths.*/
#include <stdio.h>

int main() {
    float side1, side2, side3;

    // 1. Get input for the three side lengths
    printf("Enter the length of the first side: ");
    scanf("%f", &side1);

    printf("Enter the length of the second side: ");
    scanf("%f", &side2);

    printf("Enter the length of the third side: ");
    scanf("%f", &side3);

    // 2. Perform Triangle Validity Check (Optional but good practice)
    // The sum of any two sides must be greater than the third side.
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1 || side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("\nThe given side lengths (%.2f, %.2f, %.2f) cannot form a valid triangle.\n", side1, side2, side3);
    } 
    // 3. Classify the valid triangle
    else {
        printf("\n--- Classification ---\n");
        
        // Check for Equilateral: All three sides are equal
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is EQUILATERAL (all three sides are equal).\n");
        } 
        // Check for Isosceles: At least two sides are equal
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is ISOSCELES (at least two sides are equal).\n");
        } 
        // Otherwise, it must be Scalene: No sides are equal
        else {
            printf("The triangle is SCALENE (no sides are equal).\n");
        }
    }

    return 0;
}