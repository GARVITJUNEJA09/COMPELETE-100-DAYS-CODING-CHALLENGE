#include <stdio.h>

// Assuming max value is 10000 for simple array mapping
#define MAX_VAL 10000 

// Function to find the indices of the two numbers that sum to target
void ts(int *n, int s, int t) {
    // h: Hash map (array) to store the index of a number seen so far.
    // Index stored is 1-based (i + 1) to distinguish from 0 (not seen).
    int h[MAX_VAL + 1] = {0}; 
    int i;
    
    for (i = 0; i < s; i++) {
        int c = n[i]; // c: current number
        int r = t - c; // r: required number

        // Check if the required number (r) has been seen before (h[r] > 0)
        if (r > 0 && r <= MAX_VAL && h[r] > 0) {
            // Solution found: print stored index (h[r] - 1) and current index (i)
            printf("%d %d\n", h[r] - 1, i); 
            return;
        }

        // Store the current number's index (1-based) in the hash map
        if (c <= MAX_VAL) {
            h[c] = i + 1;
        }
    }

    // No solution found
    printf("-1 -1\n");
}

int main() {
    int n1[] = {2, 7, 11, 15};
    int s1 = 4;
    int t1 = 9;

    ts(n1, s1, t1); // Output: 0 1

    int n2[] = {3, 2, 4};
    int s2 = 3;
    int t2 = 6;
    
    ts(n2, s2, t2); // Output: 1 2

    return 0;
}