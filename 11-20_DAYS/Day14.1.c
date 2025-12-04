//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n;          // The number of odd integers to sum (provided by user)
    int count = 0;  // Counter for how many odd numbers we have found so far
    int num = 1; // The current number being checked (starting at 1, the first odd number)
    int sum = 0;    // The accumulator for the total sum

  
    printf("Enter the value for n (how many odd numbers to sum): ");
    scanf("%d", &n);

    // Get input and handle errors
    if ( n <= 0) {
        printf("ERROR: Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("The first %d odd numbers are: ", n);

    // Use a while loop to find and sum the 'n' odd numbers
    // The loop continues until 'count' reaches 'n'.
    while (count < n) {
        
        // 1. Check if the current number is odd:
        // A number is odd if it leaves a remainder of 1 when divided by 2.
        if (num % 2 != 0) {
            
            // 2. If it is odd, add it to the sum
            sum += num;
            
            // 3. Increment the count of odd numbers found
            count++;
            
            // Print the number.
            printf("%d", num);
            if (count < n) {
                printf(", "); // Print comma separator
            }
        }
        
        // Move to the next integer to check
        num++;
    }

    printf("\nTotal Sum: %d\n", sum);

    return 0;
}