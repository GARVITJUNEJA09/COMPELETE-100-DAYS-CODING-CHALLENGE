//Add two matrices.
#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    // 1. Get dimensions
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) return 1;
    
    printf("Enter the number of columns: ");
    if (scanf("%d", &cols) != 1 || cols <= 0) return 1;
    
    // Declare three matrices of the same size
    int matrix1[rows][cols]; 
    int matrix2[rows][cols]; 
    int result[rows][cols]; 

    // 2. Read elements for Matrix 1
    printf("\nEnter elements for Matrix 1 (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // 3. Read elements for Matrix 2
    printf("\nEnter elements for Matrix 2 (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // 4. Perform Matrix Addition
    // This pair of loops handles the addition for every cell
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // Core addition: Add corresponding elements and store in the result matrix
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // 5. Print the Resultant Matrix
    printf("\n--- Resultant Matrix (Sum) ---\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]); 
        }
        printf("\n");
    }

    return 0;
}