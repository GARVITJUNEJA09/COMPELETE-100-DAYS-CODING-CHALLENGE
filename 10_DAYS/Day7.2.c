//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;

    // 1. Get input from the user
    printf("Enter an alphabet character: ");
    // Note the space before %c to consume any leading whitespace
    scanf(" %c", &ch); 

    // 2. Check if the character is a vowel (case sensitive check)
    // A character is a vowel if it matches any of the lowercase or uppercase vowels.
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        
        printf("\n'%c' is a VOWEL.\n", ch);
    } 
    // 3. Otherwise, check if it's an alphabet. If it is, and not a vowel, it's a consonant.
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("\n'%c' is a CONSONANT.\n", ch);
    }
    // 4. If none of the above, it's not an alphabet
    else {
        printf("\n'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}