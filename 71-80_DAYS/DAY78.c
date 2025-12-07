//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to read the file and count vowels and consonants
void r_vc(const char *fn) {
    FILE *f;
    int c;       // c: current character read from the file
    long tv = 0; // tv: total vowels
    long tc = 0; // tc: total consonants

    // Open the file in read mode ("r")
    f = fopen(fn, "r");

    // Check for file opening error
    if (f == NULL) {
        printf("Error: Could not open file %s.\n", fn);
        exit(EXIT_FAILURE);
    }

    // Read the file character by character until EOF
    while ((c = fgetc(f)) != EOF) {
        // Convert the character to lowercase for easier checking
        c = tolower(c);

        // Check if the character is a letter (a-z)
        if (c >= 'a' && c <= 'z') {
            // Check for Vowel
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                tv++;
            } 
            // If it's a letter but not a vowel, it must be a Consonant
            else {
                tc++;
            }
        }
        // If the character is not a letter, it is ignored (digits, spaces, symbols, etc.)
    }

    // Close the file
    fclose(f);

    // Print the results
    printf("--- Vowel and Consonant Count ---\n");
    printf("Vowels: %ld\n", tv);
    printf("Consonants: %ld\n", tc);
}

int main() {
    // We assume a file named "data.txt" exists.
    r_vc("data.txt"); 
    
    return 0;
}