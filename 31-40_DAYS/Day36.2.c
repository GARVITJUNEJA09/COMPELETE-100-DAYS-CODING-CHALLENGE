//Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int sum = 0;

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
    
    // Declare the matrix dynamically
    int matrix[rows][cols]; 

    // 2. Read elements and calculate the sum simultaneously
    printf("Enter the elements of the matrix:\n");
    // Outer loop controls the row (i)
    for (i = 0; i < rows; i++) {
        // Inner loop controls the column (j)
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            
            // Add the element to the running total immediately after reading
            sum = sum + matrix[i][j];
        }
    }

    // 3. Print the result
    printf("\n--- Result ---\n");
    printf("The sum of all matrix elements is: %d\n", sum);

    return 0;
}