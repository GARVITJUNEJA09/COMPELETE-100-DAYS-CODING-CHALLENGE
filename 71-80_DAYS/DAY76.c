//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>
#include <stdlib.h>

// Define a reasonable buffer size for reading lines
#define B 256 

// Function to read the filename and check its existence
void r_f() {
    char fn[100]; // fn: filename entered by the user
    FILE *f;      // f: file pointer
    char b[B];    // b: buffer to store lines read from the file

    // Ask the user for the filename
    printf("Enter the filename: ");
    if (scanf("%99s", fn) != 1) {
        printf("Error reading filename.\n");
        return;
    }

    // 1. Attempt to open the file in read mode ("r")
    f = fopen(fn, "r");

    // 2. Check if the file pointer is NULL (File does not exist or cannot be opened)
    if (f == NULL) {
        printf("Error: File does not exist!\n");
        return;
    }

    // 3. File exists: Read and display content
    printf("File opened successfully.\n");
    printf("--- Contents of %s ---\n", fn);

    // Read lines until EOF (End of File)
    while (fgets(b, B, f) != NULL) {
        printf("%s", b); 
    }
    
    // Ensure a newline if the file content didn't end with one
    printf("\n");

    // Close the file
    fclose(f);
}

int main() {
    r_f();
    
    return 0;
}