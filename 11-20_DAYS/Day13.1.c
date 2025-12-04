//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    printf("--- Basic Calculator ---\n");
    printf("Enter calculation in the format: <Number 1> <Number 2> <Operator>\n");
    printf("Example: 4 2 + \n");
    
    // Read the two numbers and the operator from a single line of input.
    // The order is important: num1, num2, then operator.
    if (scanf("%d %d %c", &num1, &num2, &operator) != 3) {
        printf("ERROR: Invalid input format. Please follow the required format.\n");
        return 1;
    }

    // Use switch-case to perform the operation based on the operator character.
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;

        case '/':
            // Check for division by zero before calculating.
            if (num2 == 0) {
                printf("ERROR: Division by zero is not allowed.\n");
                return 1; // Exit with error code
            }
            result = num1 / num2;
            printf("%d\n", result);
            break;

        case '%':
            // Check for modulus by zero before calculating.
            if (num2 == 0) {
                printf("ERROR: Modulus by zero is not allowed.\n");
                return 1; // Exit with error code
            }
            result = num1 % num2;
            printf("%d\n", result);
            break;

        default:
            // This case handles any operator not defined above.
            printf("ERROR: Invalid operator '%c'.\n", operator);
            return 1;
    }

    return 0;
}
