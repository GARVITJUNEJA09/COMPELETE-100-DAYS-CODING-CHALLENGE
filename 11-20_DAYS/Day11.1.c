//Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

// Function to check if a year is a leap year (it's good practice to separate this logic)
// It will return 1 if the year is a leap year, and 0 otherwise.
int is_leap_year(int year) {
    // A year is a leap year if it is divisible by 400.
    // OR if it is divisible by 4 AND NOT divisible by 100.
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1; // True, it's a leap year
    } else {
        return 0; // False, it's a normal year
    }
}

int main() {
    int month_number;
    int year;
    int days_in_month = 0; // This variable will store the final number of days.

      // Ask the user for the month number
    printf("Please enter the month number (1 for Jan, 2 for Feb, etc.): ");
    scanf("%d", &month_number);

    // If the month is February, we need the year to check for 29 days.
    if (month_number == 2) {
        printf("Since February can have 28 or 29 days, please enter the current year : ");
        scanf("%d", &year);
    }

    printf("\n"); // Add a blank line for cleaner output

    // --- 2. Use the switch-case to determine the month and days ---

    switch (month_number) {
        case 1: // January
            printf("Month: January\n");
            days_in_month = 31;
            break;

        case 2: // February (the special case)
            printf("Month: February\n");
            
            // Call our special function to see if the year is a leap year.
            if (is_leap_year(year)) {
                days_in_month = 29;
                printf("(The year %d is a leap year)\n", year);
            } else {
                days_in_month = 28;
                printf("(The year %d is NOT a leap year)\n", year);
            }
            break;

        case 3: // March
            printf("Month: March\n");
            days_in_month = 31;
            break;

        case 4: // April
            printf("Month: April\n");
            days_in_month = 30;
            break;

        case 5: // May
            printf("Month: May\n");
            days_in_month = 31;
            break;

        case 6: // June
            printf("Month: June\n");
            days_in_month = 30;
            break;

        case 7: // July
            printf("Month: July\n");
            days_in_month = 31;
            break;

        case 8: // August
            printf("Month: August\n");
            days_in_month = 31;
            break;

        case 9: // September
            printf("Month: September\n");
            days_in_month = 30;
            break;

        case 10: // October
            printf("Month: October\n");
            days_in_month = 31;
            break;

        case 11: // November
            printf("Month: November\n");
            days_in_month = 30;
            break;

        case 12: // December
            printf("Month: December\n");
            days_in_month = 31;
            break;

        default:
            // This runs if the user enters a number outside of 1 through 12.
            printf("Error! The number you entered (%d) is not a valid month number (1-12).\n", month_number);
            return 1; // Indicate an error occurred
    }

    // Only display the number of days if a valid month was found (i.e., not the default case)
    if (days_in_month > 0) {
        printf("Number of Days: %d days\n", days_in_month);
    }

    return 0; // Indicate the program finished successfully
}