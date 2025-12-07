#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
void c_a(char *s, char *t) {
    // Check if lengths are different. If so, they cannot be anagrams.
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return;
    }

    // f: Frequency array for lowercase English alphabet (a-z)
    int f[26] = {0}; 
    int i;
    int n = strlen(s);

    // 1. Process string s: Increment frequency count for each character
    for (i = 0; i < n; i++) {
        // 'a' is subtracted to get an index from 0 to 25
        f[s[i] - 'a']++; 
    }

    // 2. Process string t: Decrement frequency count for each character
    for (i = 0; i < n; i++) {
        f[t[i] - 'a']--;
    }

    // 3. Check frequency array: All counts must be zero
    for (i = 0; i < 26; i++) {
        if (f[i] != 0) {
            printf("Not Anagram\n");
            return;
        }
    }

    // If the program reaches here, all counts were zero
    printf("Anagram\n");
}

int main() {
    // Input 1 Example
    char *s1 = "anagram";
    char *t1 = "nagaram";
    c_a(s1, t1); // Output: Anagram

    // Input 2 Example
    char *s2 = "rat";
    char *t2 = "car";
    c_a(s2, t2); // Output: Not Anagram
    
    return 0;
}