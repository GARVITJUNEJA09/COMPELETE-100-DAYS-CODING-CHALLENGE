#include <stdio.h>
#include <stdlib.h>

// Define the maximum size for a line buffer
#define B 256 

// Function to read and print file contents
void rf(const char *fn) {
    // f: file pointer
    FILE *f; 
    // b: buffer array to hold each line read from the file
    char b[B]; 

    // Open the file in read mode ("r")
    f = fopen(fn, "r");

    // Check if the file was opened successfully
    if (f == NULL) {
        printf("Error: Could not open file %s.\n", fn);
        // Exit the program with an error status
        exit(EXIT_FAILURE); 
    }

    printf("--- Contents of %s ---\n", fn);

    // Read lines until EOF (End of File) is reached
    // fgets returns NULL when it can no longer read a line (at EOF or on error)
    while (fgets(b, B, f) != NULL) {
        // Print the line read from the file
        printf("%s", b); 
    }

    // Close the file when done
    fclose(f);
}

int main() {
    // We assume a file named "info.txt" exists in the same directory.
    rf("info.txt");
    
    return 0;
}