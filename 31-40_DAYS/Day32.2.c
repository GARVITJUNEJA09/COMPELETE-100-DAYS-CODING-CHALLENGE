//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    // This array acts as a simple tally board for digits 0 through 9.
    int counts[10] = {0}; 
    int input_num, processing_num, last_digit;
    
    // Variables to track the winner
    int most_frequent_digit = 0;
    int max_count = 0;
    int i; 

    // 1. Get the number
    printf("Enter a positive number: ");
    if (scanf("%d", &input_num) != 1 || input_num < 0) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    processing_num = input_num;
    
    // 2. Tally the frequency of each digit
    // We break the number down digit by digit
    while (processing_num > 0) {
        
        // Find the last digit (e.g., 456 % 10 gives 6)
        last_digit = processing_num % 10;
        
        // Use the digit (0-9) as the position in the 'counts' array
        counts[last_digit]++;
        
        // Remove the last digit (e.g., 456 / 10 gives 45)
        processing_num = processing_num / 10;
    }

    // 3. Check the tally board to find the winner
    // Loop through the counts array from index 0 up to 9
    for (i = 0; i <= 9; i++) {
        
        // Check if the count for the current digit (i) is higher 
        // or equal to the highest count found so far.
        if (counts[i] >= max_count) {
            
            // This digit 'i' is the new winner
            max_count = counts[i];
            most_frequent_digit = i;
        }
    }

    // 4. Print the result
    printf("\n--- Result ---\n");
    printf("The most frequent digit is: %d\n", most_frequent_digit);
    printf("It appeared %d times.\n", max_count);

    return 0;
}