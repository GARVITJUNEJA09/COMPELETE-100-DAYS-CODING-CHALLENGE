//Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    while (str[length] != '\0') {
        length++;
    }

    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--; 
    }

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}