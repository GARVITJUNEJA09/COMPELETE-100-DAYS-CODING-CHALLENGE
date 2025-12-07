//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For toupper()

// Function to read, convert, and write file contents
void c_u(const char *s_fn, const char *d_fn) {
    // s_f: source file pointer, d_f: destination file pointer
    FILE *s_f, *d_f;
    int c; // c: character read from source file

    // 1. Open Source File for reading ("r")
    s_f = fopen(s_fn, "r");
    if (s_f == NULL) {
        printf("Error: Could not open source file %s for reading.\n", s_fn);
        exit(EXIT_FAILURE);
    }

    // 2. Open Destination File for writing ("w")
    d_f = fopen(d_fn, "w");
    if (d_f == NULL) {
        printf("Error: Could not open destination file %s for writing.\n", d_fn);
        // Close the source file before exiting
        fclose(s_f); 
        exit(EXIT_FAILURE);
    }

    // 3. Read, Convert, and Write character by character
    // fgetc() reads one character (c) at a time until it hits EOF
    while ((c = fgetc(s_f)) != EOF) {
        // Convert the character to uppercase (only affects lowercase letters)
        c = toupper(c);
        
        // fputc() writes the modified character (c) to the destination file
        fputc(c, d_f);
    }

    printf("Successfully converted content from %s to uppercase and wrote to %s.\n", s_fn, d_fn);

    // 4. Close both files
    fclose(s_f);
    fclose(d_f);
}

int main() {
    // Define the source and destination filenames
    const char *s_fn = "input.txt";
    const char *d_fn = "output.txt";

    c_u(s_fn, d_fn);

    return 0;
}