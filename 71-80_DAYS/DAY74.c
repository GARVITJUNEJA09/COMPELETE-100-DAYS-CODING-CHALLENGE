//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <stdlib.h>

// Function to copy file contents
void copy_file(const char *s_fn, const char *d_fn) {
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
    // "w" mode creates the file if it doesn't exist, or truncates (clears) it if it does.
    d_f = fopen(d_fn, "w");
    if (d_f == NULL) {
        printf("Error: Could not open destination file %s for writing.\n", d_fn);
        // Close the source file before exiting
        fclose(s_f); 
        exit(EXIT_FAILURE);
    }

    // 3. Copy character by character
    // fgetc() reads one character (c) at a time until it hits EOF
    while ((c = fgetc(s_f)) != EOF) {
        // fputc() writes the character (c) to the destination file
        fputc(c, d_f);
    }

    printf("Successfully copied content from %s to %s.\n", s_fn, d_fn);

    // 4. Close both files
    fclose(s_f);
    fclose(d_f);
}

int main() {
    char s_fn[100]; // s_fn: source filename
    char d_fn[100]; // d_fn: destination filename

    // Get source filename from the user
    printf("Enter the source filename: ");
    if (scanf("%99s", s_fn) != 1) {
        printf("Error reading source filename.\n");
        return 1;
    }

    // Get destination filename from the user
    printf("Enter the destination filename: ");
    if (scanf("%99s", d_fn) != 1) {
        printf("Error reading destination filename.\n");
        return 1;
    }

    copy_file(s_fn, d_fn);

    return 0;
}