//Write a program to print all factors of a given number.

#include <stdio.h>

void printFactors(int num) {
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }
    
    // We use a temporary variable 'limit' to handle potential overflow 
    // when checking i * i <= num for very large 'int' inputs.
    long long limit = num;
    int i;
    
    // PASS 1: Print factors up to the square root (the smaller factor in each pair)
    for (i = 1; (long long)i * i <= limit; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    // PASS 2: Print the corresponding paired factors (num / i) in descending order.
    // The loop starts from the last 'i' that was checked.
    i--; 
    
    // Adjust i to skip the perfect square factor if it was already printed in Pass 1.
    if ((long long)i * i == limit) {
        i--;
    }

    // Iterate backward to print the large factors in ascending order.
    for (; i >= 1; i--) {
        if (num % i == 0) {
            printf("%d ", num / i);
        }
    }
    
    printf("\n");
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Factors of %d are: ", number);
    printFactors(number);

    return 0;
}