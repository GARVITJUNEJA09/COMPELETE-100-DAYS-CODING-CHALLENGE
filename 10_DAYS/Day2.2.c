//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    // Assigning the value of PI directly
    float PI = 3.14159f; 
    
    float radius;
    float area;
    float circumference;

    // 1. Get the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // 2. Calculate the Area
    // Formula: Area = PI * radius * radius
    area = PI * radius * radius;

    // 3. Calculate the Circumference
    // Formula: Circumference = 2 * PI * radius
    circumference = 2 * PI * radius;

    // 4. Display the results
    printf("\n--- Results ---\n");
    printf("The Radius is: %.2f units\n", radius);
    printf("The Area of the circle is: %.2f square units\n", area);
    printf("The Circumference (distance around) is: %.2f units\n", circumference);

    return 0;
}