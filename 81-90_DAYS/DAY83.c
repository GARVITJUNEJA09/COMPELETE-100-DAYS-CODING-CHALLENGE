// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/


#include <stdio.h>
#include <string.h>

enum Months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    char input[10];
    scanf("%s", input);

    enum Months month;

    if (strcmp(input, "JAN") == 0)       month = JAN;
    else if (strcmp(input, "FEB") == 0)  month = FEB;
    else if (strcmp(input, "MAR") == 0)  month = MAR;
    else if (strcmp(input, "APR") == 0)  month = APR;
    else if (strcmp(input, "MAY") == 0)  month = MAY;
    else if (strcmp(input, "JUN") == 0)  month = JUN;
    else if (strcmp(input, "JUL") == 0)  month = JUL;
    else if (strcmp(input, "AUG") == 0)  month = AUG;
    else if (strcmp(input, "SEP") == 0)  month = SEP;
    else if (strcmp(input, "OCT") == 0)  month = OCT;
    else if (strcmp(input, "NOV") == 0)  month = NOV;
    else                                month = DEC;

    switch (month) {
        case JAN: printf("31 days"); break;
        case FEB: printf("28 or 29 days"); break;
        case MAR: printf("31 days"); break;
        case APR: printf("30 days"); break;
        case MAY: printf("31 days"); break;
        case JUN: printf("30 days"); break;
        case JUL: printf("31 days"); break;
        case AUG: printf("31 days"); break;
        case SEP: printf("30 days"); break;
        case OCT: printf("31 days"); break;
        case NOV: printf("30 days"); break;
        case DEC: printf("31 days"); break;
    }

    return 0;
}