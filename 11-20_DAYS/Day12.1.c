/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include <stdio.h>

int main() {
    int days_late;
    int fine = 0;

    printf("Enter the number of days the book is late: ");
    
    // Get user input and validate it
    if (scanf("%d", &days_late) != 1 || days_late < 0) {
        printf("Error: Invalid input. Please enter a non-negative integer.\n");
        return 1; // Return non-zero to indicate an error
    }

   

    if (days_late == 0) {
        printf("No fine. The book was returned on time.\n");
        return 0;
    } 
    else if (days_late > 30) {
        printf("Membership Cancelled due to a late return exceeding 30 days.\n");
        return 0;
    }
    
   //FINE CALCULATION LOGIC
    
    int temp_days = days_late; // Use a temporary variable for calculation

    // Tier 3: Days 11-30 (₹6/day)
    // If late for more than 10 days, calculate the fine for the excess days at 6.
    if (temp_days > 10) {
        int days_in_tier_3 = temp_days - 10;
        fine += days_in_tier_3 * 6;
        temp_days = 10; // Reset days to 10 for the next tier's check
    }

    // Tier 2: Days 6-10 (₹4/day)
    // If late for more than 5 days, calculate the fine for the excess days at 4.
    if (temp_days > 5) {
        int days_in_tier_2 = temp_days - 5;
        fine += days_in_tier_2 * 4;
        temp_days = 5; // Reset days to 5 for the final tier's check
    }
    
    // Tier 1: Days 1-5 (₹2/day)
    // Calculate the fine for the remaining days at 2.
    if (temp_days > 0) {
        fine += temp_days * 2;
    }

    printf("\nTotal Fine for %d days late: %d\n", days_late, fine);
    
    return 0; 
}