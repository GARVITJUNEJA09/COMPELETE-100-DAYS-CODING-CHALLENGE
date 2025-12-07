#include <stdio.h>

// Function for swapping two elements
void s(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Function to partition the array for QuickSort
int p(int a[], int l, int h) {
    int x = a[h];
    int i = (l - 1);

    int j;
    for (j = l; j <= h - 1; j++) {
        if (a[j] <= x) {
            i++;
            s(&a[i], &a[j]);
        }
    }
    s(&a[i + 1], &a[h]);
    return (i + 1);
}

// Function to perform QuickSort
void qs(int a[], int l, int h) {
    if (l < h) {
        int i = p(a, l, h);
        qs(a, l, i - 1);
        qs(a, i + 1, h);
    }
}

// Function to find the kth smallest element
int kse(int a[], int n, int k) {
    // Check if k is valid
    if (k > 0 && k <= n) {
        // Sort the entire array
        qs(a, 0, n - 1);
        
        // The kth smallest element is at index k-1
        return a[k - 1];
    }
    // Return a flag value if k is out of bounds
    return -1; 
}

int main() {
    // Input 1 Example
    int a[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 4;

    printf("%d\n", kse(a, n, k)); // Output: 5

    return 0;
}