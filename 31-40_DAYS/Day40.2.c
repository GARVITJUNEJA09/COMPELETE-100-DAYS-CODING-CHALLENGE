//Multiply two matrices.
#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    // Get Dimensions
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check Compatibility
    if (c1 != r2) {
        printf("\nError: Columns of Matrix A (%d) must equal rows of Matrix B (%d).\n", c1, r2);
        return 1;
    }

    // Read Matrix A
    printf("\nEnter elements for Matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Read Matrix B
    printf("\nEnter elements for Matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Perform Multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0; // Initialize cell
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Result Matrix C
    printf("\nResult Matrix C (%d x %d):\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%5d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}