#include <stdio.h>
#include <stdlib.h>

// Function to merge two sorted arrays
void m(int *a, int m_s, int *b, int n_s) {
    // k: size of the merged array
    int k = m_s + n_s;
    // r: result array (merged array)
    int *r = (int *)malloc(k * sizeof(int));

    int i = 0; // i: pointer for array a
    int j = 0; // j: pointer for array b
    int l = 0; // l: pointer for result array r

    // 1. Merge phase: compare elements from both arrays
    while (i < m_s && j < n_s) {
        // The smaller element is placed next in the result array
        if (a[i] <= b[j]) {
            r[l++] = a[i++];
        } else {
            r[l++] = b[j++];
        }
    }

    // 2. Remaining elements phase: if elements are left in array a
    while (i < m_s) {
        r[l++] = a[i++];
    }

    // 3. Remaining elements phase: if elements are left in array b
    while (j < n_s) {
        r[l++] = b[j++];
    }

    // Print the merged array
    for (l = 0; l < k; l++) {
        printf("%d ", r[l]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(r);
}

int main() {
    // Input arrays must be sorted
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};
    int m_s = sizeof(a) / sizeof(a[0]);
    int n_s = sizeof(b) / sizeof(b[0]);

    m(a, m_s, b, n_s); // Output: 1 2 3 4 5 6 7 8 

    return 0;
}