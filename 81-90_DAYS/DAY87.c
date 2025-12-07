// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/



#include <stdio.h>
#include <string.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    char input[10];
    scanf("%s", input);

    enum Role role;

    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else
        role = GUEST;

    switch(role) {
        case ADMIN: printf("Welcome Admin!"); break;
        case USER:  printf("Welcome User!"); break;
        case GUEST: printf("Welcome Guest!"); break;
    }

    return 0;
}