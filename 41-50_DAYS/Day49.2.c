//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter your full name: ");
    gets(name); 

    len = strlen(name);

    printf("Formatted name: ");

    if (name[0] != ' ')
        printf("%c. ", toupper(name[0]));

    for (i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ' && i < len - 1) {
            int j = i + 1;
            while (j < len && name[j] != ' ')
                j++;
            if (j < len)
                printf("%c. ", toupper(name[i]));
            else {
                printf("%s", &name[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;