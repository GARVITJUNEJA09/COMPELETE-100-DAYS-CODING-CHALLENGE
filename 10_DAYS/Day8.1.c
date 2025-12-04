//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
    char ch;

    // Get input from the user
    printf("Enter a character: ");
    // Note the space before %c to handle any leading whitespace/newline
    scanf(" %c", &ch);

    // Check if it is an uppercase alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an UPPERCASE alphabet.\n", ch);
    } 
    // Check if it is a lowercase alphabet
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a LOWERCASE alphabet.\n", ch);
    } 
    // Check if it is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a DIGIT.\n", ch);
    }
    // If it's none of the above, it's a special character
    else {
        printf("'%c' is a SPECIAL CHARACTER.\n", ch);
    }

    return 0;
}