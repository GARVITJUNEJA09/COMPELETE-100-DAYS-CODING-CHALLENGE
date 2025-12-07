//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *wordStart = NULL;
    int i;

    printf("Enter a sentence: ");
    gets(str); 

    for (i = 0; str[i] != '\0'; i++) {
        if (wordStart == NULL && str[i] != ' ') {
            wordStart = &str[i]; 
        }

        if ((str[i + 1] == ' ' || str[i + 1] == '\0') && wordStart != NULL) {
            reverseWord(wordStart, &str[i]);
            wordStart = NULL; 
        }
    }

    printf("Sentence after reversing each word:\n%s\n", str);

    return 0;
}