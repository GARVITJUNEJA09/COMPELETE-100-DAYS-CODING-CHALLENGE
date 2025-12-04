//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h> // Required for sqrt() and pow() functions

int main() {
    // Coefficients a, b, c, Discriminant, and Roots are declared as float/double
    // to handle floating-point calculations accurately.
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    // 1. Calculate the Discriminant (D = b^2 - 4ac)
    discriminant = b * b - 4 * a * c;

    // 2. Check the condition of the Discriminant to categorize the roots

    // Case 1: Real and Distinct Roots (D > 0)
    if (discriminant > 0) {
        printf("The Discriminant (%.2lf) is POSITIVE.\n", discriminant);
        printf("The roots are REAL and DISTINCT (different).\n");
        
        // Formula: x = (-b ± sqrt(D)) / (2a)
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1 (x1) = %.4lf\n", root1);
        printf("Root 2 (x2) = %.4lf\n", root2);
    }

    // Case 2: Real and Equal Roots (D = 0)
    else if (discriminant == 0) {
        printf("The Discriminant is ZERO.\n");
        printf("The roots are REAL and EQUAL.\n");
        
        // Formula: x = -b / (2a)
        root1 = root2 = -b / (2 * a);
        
        printf("Root 1 (x1) = Root 2 (x2) = %.4lf\n", root1);
    }

    // Case 3: Complex Roots (D < 0)
    else { // discriminant < 0
        printf("The Discriminant (%.2lf) is NEGATIVE.\n", discriminant);
        printf("The roots are COMPLEX (imaginary).\n");
        
        // Since D is negative, we use -D for the sqrt calculation.
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);

        printf("Root 1 (x1) = %.4lf + %.4lfi\n", realPart, imagPart);
        printf("Root 2 (x2) = %.4lf - %.4lfi\n", realPart, imagPart);
    }

    return 0;
}