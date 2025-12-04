//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int size;
    int i, j;
    int is_symmetric = 1; // Flag: 1 means True (symmetric), 0 means False

    // 1. Get the size of the square matrix
    printf("Enter the size (number of rows and columns): ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid size. Exiting.\n");
        return 1;
    }
    
    // Declare the square matrix
    int matrix[size][size]; 

    // 2. Read elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Check for symmetry (M[i][j] == M[j][i])
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            
            // Compare the element with its mirror across the diagonal
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0; // Found a mismatch
                break;            // Exit the inner loop
            }
        }
        if (is_symmetric == 0) {
            break; // Exit the outer loop if a mismatch was found
        }
    }

    // 4. Print the result
    printf("\n--- Result ---\n");
    if (is_symmetric == 1) {
        printf("The matrix is SYMMETRIC.\n");
    } else {
        printf("The matrix is NOT symmetric.\n");
    }

    return 0;
}