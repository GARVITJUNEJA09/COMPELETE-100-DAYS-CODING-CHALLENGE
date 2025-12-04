//Read and print a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    // 1. Get dimensions from the user
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid rows. Exiting.\n");
        return 1;
    }
    printf("Enter the number of columns: ");
    if (scanf("%d", &cols) != 1 || cols <= 0) {
        printf("Invalid columns. Exiting.\n");
        return 1;
    }
    
    // Declare the matrix dynamically (Variable Length Array - VLA)
    int matrix[rows][cols]; 

    // 2. Read elements into the matrix
    printf("Enter the elements of the matrix:\n");
    // Outer loop runs 'rows' times (i = row index)
    for (i = 0; i < rows; i++) {
        // Inner loop runs 'cols' times (j = column index)
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Print the matrix
    printf("\n--- The Matrix ---\n");
    // Outer loop for printing rows
    for (i = 0; i < rows; i++) {
        // Inner loop for printing columns
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]); // Use '\t' for tab spacing
        }
        printf("\n"); // Move to the next line after finishing a row
    }

    return 0;
}