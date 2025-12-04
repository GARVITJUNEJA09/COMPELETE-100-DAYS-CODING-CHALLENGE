//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int size;
    int i, j;
    int sum = 0;

    // 1. Get matrix size
    printf("Enter the size of the square matrix (N): ");
    if (scanf("%d", &size) != 1 || size <= 0) return 1;
    
    // Declare the matrix
    int matrix[size][size]; 

    // 2. Read elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Calculate sum of main diagonal
    for (i = 0; i < size; i++) {
        // Main diagonal elements are at position [i][i]
        sum = sum + matrix[i][i];
    }

    // 4. Print result
    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}