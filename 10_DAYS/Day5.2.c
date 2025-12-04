//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    long totalSeconds;//long datatype is used to enter larger integers 
    int hours, minutes, seconds;

    // Get input from the user
    printf("Enter time in total seconds: ");
    scanf("%ld", &totalSeconds);

    // 1. Calculate Hours
    // There are 3600 seconds in an hour (60 * 60)
    hours = totalSeconds / 3600;

    // 2. Calculate remaining seconds after hours are accounted for
    // The modulo operator (%) gives the remainder
    long remainingSeconds = totalSeconds % 3600;

    // 3. Calculate Minutes
    // There are 60 seconds in a minute
    minutes = remainingSeconds / 60;

    // 4. Calculate the final seconds
    // This is the remainder after the minutes are accounted for
    seconds = remainingSeconds % 60;

    // Display the result
    printf("\n--- Time Conversion ---\n");
    printf("Total Seconds: %ld\n", totalSeconds);
    printf("Converted Time: %d:%d:%d (HH:MM:SS)\n", hours, minutes, seconds);

    return 0;
}