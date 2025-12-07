#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to find the maximum of two integers
int m(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the length of the longest substring without repeating characters
int lswrc(char *s) {
    int n = strlen(s);
    if (n == 0) return 0;
    
    // a: Map (array) to store the last seen 1-based index of each character (ASCII 0-255)
    int a[256] = {0}; 
    
    int l = 0; // l: Left pointer of the sliding window (0-based)
    int i;     // i: Right pointer of the sliding window
    int M = 0; // M: Maximum length found so far

    for (i = 0; i < n; i++) {
        char c = s[i];
        
        // If the character is repeated AND its last index (a[c]) 
        // is within the current window (a[c] > l), move the left pointer (l)
        if (a[c] > l) {
            l = a[c];
        }

        // Store the current 1-based index (i + 1) in the map
        a[c] = i + 1;

        // Calculate current window length (i - l + 1) and update max length (M)
        M = m(M, i - l + 1);
    }

    return M;
}

int main() {
    char *s1 = "abcabcbb";
    printf("%d\n", lswrc(s1)); 

    char *s2 = "pwwkew";
    printf("%d\n", lswrc(s2)); 

    return 0;
}