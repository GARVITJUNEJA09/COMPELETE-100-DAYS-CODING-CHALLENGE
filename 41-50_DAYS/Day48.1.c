#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int isRotation(const char *s1, const char *s2) {
    int l1 = strlen(s1);
    int l2 = strlen(s2);

    if (l1 != l2 || l1 == 0) {
        return 0;
    }

    char *t = (char *)malloc(sizeof(char) * (2 * l1 + 1));
    if (t == NULL) {
        return 0;
    }

    strcpy(t, s1);
    strcat(t, s1);

    if (strstr(t, s2) != NULL) {
        free(t);
        return 1;
    }

    free(t);
    return 0;
}

int main() {
    char a[MAX];
    char b[MAX];

    printf("Enter the FIRST string (original): ");
    scanf("%s", a);

    printf("Enter the SECOND string (potential rotation): ");
    scanf("%s", b);

    if (isRotation(a, b)) {
        printf("RESULT: \"%s\" IS a rotation of \"%s\".\n", b, a);
    } else {
        printf("RESULT: %s is NOT a rotation of %s.\n", b, a);
    }

    return 0;
}