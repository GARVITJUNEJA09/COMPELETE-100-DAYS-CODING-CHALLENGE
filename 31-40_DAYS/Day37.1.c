//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int row_sum;

    // 1. Get matrix dimensions
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) return 1;
    
    printf("Enter the number of columns: ");
    if (scanf("%d", &cols) != 1 || cols <= 0) return 1;
    
    // Declare the matrix and the storage array dynamically
    int matrix[rows][cols];
    int row_sums_array[rows]; 

    // 2. Read elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Calculate sum of each row
    // Outer loop iterates through rows
    for (i = 0; i < rows; i++) {
        
        // Reset the sum for the NEW row
        row_sum = 0;
        
        // Inner loop iterates across columns
        for (j = 0; j < cols; j++) {
            row_sum = row_sum + matrix[i][j];
        }
        
        // Store the final row sum in the result array
        row_sums_array[i] = row_sum;
    }

    // 4. Print the results
    printf("\n--- Row Sums ---\n");
    for (i = 0; i < rows; i++) {
        printf("Sum of Row %d: %d\n", i, row_sums_array[i]);
    }

    return 0;
}