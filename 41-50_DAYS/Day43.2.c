//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    while (str[length] != '\0') {
        length++;
    }

    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}