//remove the unnnecessary comments and explain in detail
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    if (num == 2 || num == 3) {
        return 1;
    }
    
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }

    for (int i = 5; (long long)i * i <= num; i = i + 6) {
        if (num % i == 0) {
            return 0; 
        }
        
        if (num % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is NOT a prime number.\n", number);
    }

    return 0;
}