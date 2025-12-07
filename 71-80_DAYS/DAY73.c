//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Define the state for word counting
#define OUT 0 // Outside a word
#define IN 1  // Inside a word

// Function to read the file and count characters, words, and lines
void rcwl(const char *fn) {
    FILE *f;
    int c;       // c: current character read from the file
    long tc = 0; // tc: total characters
    long tw = 0; // tw: total words
    long tl = 0; // tl: total lines
    int s = OUT; // s: state for word counting (start outside a word)

    // Open the file in read mode ("r")
    f = fopen(fn, "r");

    // Check for file opening error
    if (f == NULL) {
        printf("Error: Could not open file %s.\n", fn);
        exit(EXIT_FAILURE);
    }

    // Read the file character by character until EOF
    while ((c = fgetc(f)) != EOF) {
        // 1. Character Count
        tc++;

        // 2. Line Count
        if (c == '\n') {
            tl++;
        }

        // 3. Word Count (State Machine Logic)
        // If the character is a space, newline, or tab, we are outside a word
        if (isspace(c)) {
            s = OUT;
        } 
        // If we are currently OUTSIDE a word and the character is NOT a space,
        // it means a new word has just begun.
        else if (s == OUT) {
            s = IN;
            tw++;
        }
    }

    // Handle the case where the last line does not end with a newline character
    if (tc > 0 && fgetc(f) == EOF && c != '\n') {
        tl++;
    }

    // Close the file
    fclose(f);

    // Print the results
    printf("--- File Analysis ---\n");
    printf("Characters: %ld\n", tc);
    printf("Words: %ld\n", tw);
    printf("Lines: %ld\n", tl);
}

int main() {
    // Replace "input.txt" with the name of your file.
    rcwl("input.txt"); 
    
    return 0;
}