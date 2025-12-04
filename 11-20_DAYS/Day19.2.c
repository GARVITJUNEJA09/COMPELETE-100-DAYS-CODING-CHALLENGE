//Write a program to find the sum of digits of a number.
#include <stdio.h>

int sumOfDigits(int number) {
    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        return 0;
    }

    int sum = 0;
    
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    
    return sum;
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int result = sumOfDigits(num);
    printf("The sum of the digits of %d is: %d\n", num, result);

    return 0;
}