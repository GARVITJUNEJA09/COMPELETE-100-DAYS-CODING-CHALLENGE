//Write a program to find the LCM of two numbers.
#include <stdio.h>

// Function to find the Greatest Common Divisor (GCD) using the Euclidean Algorithm
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

// Function to find the Least Common Multiple (LCM)
long long findLCM(int a, int b) {
    // Handle the case where one or both numbers are zero
    if (a == 0 || b == 0) {
        return 0;
    }

    // Get the absolute values for calculation
    long long abs_a = (long long)a;
    long long abs_b = (long long)b;
    if (abs_a < 0) abs_a = -abs_a;
    if (abs_b < 0) abs_b = -abs_b;

    // LCM(a, b) = (|a * b|) / GCD(a, b)
    int gcd = findGCD(a, b);
    
    // We multiply one number by the result of the other divided by GCD.
    // This division step is done first to prevent potential overflow 
    // when multiplying two large integers.
    return (abs_a / gcd) * abs_b;
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
    
    long long lcm = findLCM(num1, num2);

    printf("The LCM of %d and %d is: %lld\n", num1, num2, lcm);

    return 0;
}