#include <stdio.h>
#include <ctype.h> // For toupper() and tolower()
#include <string.h>

// Function to convert the string to sentence case
void sc(char *s) {
    int i;
    int n = strlen(s);
    
    // Flag to track if the start of a new sentence/word has been found
    int f = 1; 

    for (i = 0; i < n; i++) {
        // If the current character is an alphabet
        if (isalpha(s[i])) {
            if (f == 1) {
                // Capitalize the first letter found
                s[i] = toupper(s[i]);
                f = 0; // Reset flag so subsequent letters are lowercase
            } else {
                // Convert subsequent letters to lowercase
                s[i] = tolower(s[i]);
            }
        } 
        // If the character is a period, question mark, or exclamation mark, 
        // set the flag to 1 to capitalize the next letter encountered.
        else if (s[i] == '.' || s[i] == '?' || s[i] == '!') {
            f = 1;
        }
    }
}

int main() {
    // Array large enough to hold the string and allow modification
    char s[100] = "this is a test SENTENCE. and another one!"; 

    printf("Original: %s\n", s);
    
    sc(s);

    printf("Sentence: %s\n", s); // Output: This is a test sentence. And another one!
    
    return 0;
}