//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>
#include <stdlib.h>

// Function to read the file, compute sum and average
void r_c(const char *fn) {
    FILE *f;
    int n;          // n: current integer read from the file
    long long s = 0; // s: total sum (use long long to prevent overflow)
    int c = 0;      // c: count of integers read

    // Open the file in read mode ("r")
    f = fopen(fn, "r");

    // Check for file opening error
    if (f == NULL) {
        printf("Error: Could not open file %s.\n", fn);
        exit(EXIT_FAILURE);
    }

    // Read integers from the file until EOF
    // scanf returns the number of items successfully read (1 in this case)
    while (fscanf(f, "%d", &n) == 1) {
        s = s + n; // Add the number to the sum
        c++;       // Increment the count
    }

    // Close the file
    fclose(f);

    // Check if any numbers were read
    if (c == 0) {
        printf("The file is empty or contains no valid integers.\n");
        return;
    }

    // Compute the average
    double a = (double)s / c; // a: average

    // Print the results
    printf("--- Analysis of %s ---\n", fn);
    printf("Total Sum: %lld\n", s);
    printf("Total Count: %d\n", c);
    printf("Average: %.2f\n", a);
}

int main() {
    // We assume a file named "numbers.txt" exists with space-separated integers.
    r_c("numbers.txt"); 
    
    return 0;
}