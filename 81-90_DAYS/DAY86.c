// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/


#include <stdio.h>
#include <string.h>

enum Operation {ADD, SUBTRACT, MULTIPLY};

int main() {
    char op[15];
    int a, b;
    scanf("%s %d %d", op, &a, &b);

    enum Operation operation;

    if (strcmp(op, "ADD") == 0)
        operation = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        operation = SUBTRACT;
    else
        operation = MULTIPLY;

    switch (operation) {
        case ADD:       printf("%d", a + b); break;
        case SUBTRACT:  printf("%d", a - b); break;
        case MULTIPLY:  printf("%d", a * b); break;
    }

    return 0;
}