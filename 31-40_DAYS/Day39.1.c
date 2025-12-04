//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int size;
    int i, j;
    int are_distinct = 1; // 1 = True (elements are distinct)

    // 1. Get matrix size (must be square)
    printf("Enter the size of the square matrix (N): ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid size. Exiting.\n");
        return 1;
    }
    
    int matrix[size][size]; 

    // 2. Read matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Compare diagonal elements
    for (i = 0; i < size; i++) {
        // Start j at i + 1 to check remaining diagonal elements
        for (j = i + 1; j < size; j++) {
            
            // Check if diagonal element M[i][i] equals M[j][j]
            if (matrix[i][i] == matrix[j][j]) {
                are_distinct = 0; // Found a duplicate
                i = size;         // Force exit outer loop
                break;            // Exit inner loop
            }
        }
    }

    // 4. Print result
    printf("\n--- Result ---\n");
    if (are_distinct == 1) {
        printf("The main diagonal elements are DISTINCT.\n");
    } else {
        printf("The main diagonal elements are NOT distinct (a duplicate was found).\n");
    }

    return 0;
}