//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
#include <stdlib.h>

// Function to append a line of text to a file
void af(const char *fn) {
    FILE *f; // f: file pointer
    char b[100]; // b: input buffer

    // Open the file in append mode ("a")
    f = fopen(fn, "a");

    // Check for file opening error
    if (f == NULL) {
        printf("Error: Could not open file %s.\n", fn);
        exit(EXIT_FAILURE);
    }

    printf("Enter the line of text to append:\n");
    // Read user input from stdin
    if (fgets(b, sizeof(b), stdin) == NULL) {
        printf("Error reading input.\n");
        fclose(f);
        return;
    }

    // Write the content to the file
    if (fputs(b, f) == EOF) {
        printf("Error writing to file.\n");
    } else {
        printf("\nText successfully appended to %s.\n", fn);
    }

    // Close the file
    fclose(f);
}

int main() {
    const char *fn = "log.txt"; 
    
    af(fn);
    
    return 0;
}