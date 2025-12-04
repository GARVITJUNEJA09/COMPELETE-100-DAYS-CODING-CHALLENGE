//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int findGCD(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a == 0) return b;
    if (b == 0) return a;
    
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    
    return a;
}

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second integer: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    int hcf = findGCD(num1, num2);

    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}