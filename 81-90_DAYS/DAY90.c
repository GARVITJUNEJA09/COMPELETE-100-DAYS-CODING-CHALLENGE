// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/


#include <stdio.h>
#include <string.h>

enum Gender {MALE, FEMALE, OTHER};

struct Person {
    enum Gender gender;
};

int main() {
    char input[10];
    scanf("%s", input);

    struct Person p;

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else
        p.gender = OTHER;

    switch(p.gender) {
        case MALE:   printf("Male"); break;
        case FEMALE: printf("Female"); break;
        case OTHER:  printf("Other"); break;
    }

    return 0;
}