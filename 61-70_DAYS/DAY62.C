#include <stdio.h>
#include <limits.h>

// Function to find the maximum of two integers
int m(int a, int b) {
    return (a > b) ? a : b;
}

int ka(int *a, int n) {
    int g = INT_MIN; // g: global max sum 
    int c = 0;       // c: current max sum

    int i;
    for (i = 0; i < n; i++) {
        // Update the current max sum (c)
        c = c + a[i];

        // If the current sum is less than the current element, 
        // reset c to start a new subarray from a[i].
        // This handles when the running sum becomes negative.
        c = m(a[i], c); 

        // Update the overall global max sum (g)
        g = m(g, c);
    }

    return g;
}

int main() {
    // Example 1: Standard case
    int a1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    
    printf("%d\n", ka(a1, n1)); 

    // Example 2: All negative case
    int a2[] = {-2, -3, -1, -5, -4};
    int n2 = sizeof(a2) / sizeof(a2[0]);
    
    printf("%d\n", ka(a2, n2)); 
    
    return 0;
}