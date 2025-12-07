#include <stdio.h>

// Function to find the missing number
int fn(int *a, int n) {
    // E: Expected sum of numbers from 0 to n
    int E = (n * (n + 1)) / 2;
    
    // S: Actual sum of the elements in the input array
    int S = 0;
    int i;
    
    // Calculate the actual sum (S)
    for (i = 0; i < n; i++) {
        S = S + a[i];
    }
    
    // Missing number is the difference
    return E - S;
}

int main() {
    int a[] = {4, 0, 1, 3};
    // n: array size (4), meaning the full range is 0 to 4
    int n = sizeof(a) / sizeof(a[0]); 
    
    int M = fn(a, n);

    printf("%d\n", M); 
    
    return 0;
}