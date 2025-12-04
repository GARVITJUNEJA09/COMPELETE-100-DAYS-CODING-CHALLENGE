   //Write a program to input two numbers and display their sum.
#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1); //take integer input from user and store it in num1

    printf("Enter the second number: ");
    scanf("%d", &num2); //take integer input from user and store it in num2

    sum = num1 + num2; //calculate the sum of num1 and num2 and store it in sum

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);//display the sum to the user

    return 0;
}