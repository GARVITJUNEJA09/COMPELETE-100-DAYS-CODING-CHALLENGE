//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int diag_sum; 

    // 1. Get matrix dimensions
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) return 1;
    
    printf("Enter the number of columns: ");
    if (scanf("%d", &cols) != 1 || cols <= 0) return 1;
    
    // Declare the matrix
    int matrix[rows][cols]; 

    // 2. Read elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Perform Anti-Diagonal Traversal
    printf("\n--- Diagonal Traversal ---\n");
    
    // Outer loop iterates through each diagonal strip
    for (diag_sum = 0; diag_sum < rows + cols - 1; diag_sum++) {
        
        // Inner loops check every cell
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                
                // If the sum of indices matches the current diagonal strip number
                if ((i + j) == diag_sum) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
        printf("\n"); 
    }

    return 0;
}