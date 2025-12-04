//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

long long power(int base, int exp) {
    long long result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

int isArmstrong(int number) {
    if (number < 0) {
        return 0;
    }
    
    if (number == 0) {
        return 1;
    }

    int originalNumber = number;
    int numDigits = 0;
    int temp = number;

    // 1. Count the number of digits
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    long long sumOfPowers = 0;
    temp = originalNumber;

    // 2. Calculate the sum of the digits raised to the power of numDigits
    while (temp != 0) {
        int digit = temp % 10;
        
        sumOfPowers += power(digit, numDigits); 
        
        temp /= 10;
    }

    // 3. Compare the sum with the original number
    if (sumOfPowers == originalNumber) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is NOT an Armstrong number.\n", num);
    }

    return 0;
}