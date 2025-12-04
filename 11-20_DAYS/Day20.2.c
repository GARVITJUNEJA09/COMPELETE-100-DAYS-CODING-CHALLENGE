//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
   const int MAX_BITS = 100; 
    char binary_num[MAX_BITS];
    int length = 0;
    
    // 1. Get the binary number from the user
    printf("Enter a binary number (string of 0s and 1s, max 99 digits): ");
    
    // Read the input directly into the character array
    if (scanf("%s", binary_num) != 1) {
        printf("Error reading input.\n");
        return 1;
    }

    // 2. Manually find the length of the string
    // We loop until we find the null terminator ('\0')
    while (binary_num[length] != '\0') {
        length++;
    }

    // 3. Calculate the 1's Complement
    // Loop through each character from start to end
    for (int i = 0; i < length; i++) {
        
        // Flip the bit: '0' becomes '1', '1' becomes '0'
        if (binary_num[i] == '0') {
            binary_num[i] = '1';
        } else if (binary_num[i] == '1') {
            binary_num[i] = '0';
        } 
    }

    // 4. Print the result
   printf("1's Complement: %s\n", binary_num);

    return 0;
}