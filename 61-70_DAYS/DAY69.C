/*Write a program to take an integer array as input. 
Only one element will be repeated. 
Print the repeated element. 
Try to find the result in one single iteration.*/
#include <stdio.h>

// Function to find the repeated element in one iteration
int fr(int *a, int n) {
    // x: XOR accumulator. Initialized to 0.
    int x = 0; 
    int i;
    
    // 1. XOR all elements in the array
    for (i = 0; i < n; i++) {
        x = x ^ a[i];
    }
    
    // 2. XOR the result (x) with the expected sequence (1 to n-1)
    // The total expected count of unique numbers is n - 1 (since the array size is n)
    for (i = 1; i < n; i++) {
        x = x ^ i;
    }
    
    // The final value of x is the repeated element
    return x;
}

int main() {
    // Input array of size 5 (n=5). Range of numbers is 1 to 4, with 2 repeated.
    int a[] = {1, 2, 3, 2, 4};
    // n: array size
    int n = sizeof(a) / sizeof(a[0]); 
    
    int r = fr(a, n);

    printf("%d\n", r); // Output: 2
    
    return 0;
}