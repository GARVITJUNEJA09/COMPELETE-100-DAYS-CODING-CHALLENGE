//Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    // 1. Get dimensions
    printf("Enter the number of rows for the matrix: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) return 1;
    
    printf("Enter the number of columns for the matrix: ");
    if (scanf("%d", &cols) != 1 || cols <= 0) return 1;
    
    // Declare arrays
    int matrix[rows][cols];
    int transpose[cols][rows];

    // 2. Read elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Find the Transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            
            // Core swap: matrix[i][j] goes to transpose[j][i]
            transpose[j][i] = matrix[i][j];
        }
    }

    // 4. Print the Transposed Matrix
    printf("\n--- Transposed Matrix ---\n");
    // Print loop uses the NEW dimensions (cols x rows)
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]); 
        }
        printf("\n");
    }

    return 0;
}