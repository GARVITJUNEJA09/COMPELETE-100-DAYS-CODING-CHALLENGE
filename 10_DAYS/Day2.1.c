/*Write a program to calculate the area and perimeter of a rectangle given its 
length and breadth.*/
#include <stdio.h>

int main() {
    // Declare variables using 'float' for single-precision floating-point numbers.
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    // Use %f for float input
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display Results
    // Use %.2f to display float results formatted to two decimal places
    printf("Length:    %.2f units\n", length);
    printf("Breadth:   %.2f units\n", breadth);
    printf("Area:      %.2f square units\n", area);
    printf("Perimeter: %.2f units\n", perimeter);

    return 0;
}