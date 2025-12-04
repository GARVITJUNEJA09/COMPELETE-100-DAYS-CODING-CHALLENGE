//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    // We use 'float' for temperature variables since temperatures are rarely exact whole numbers.
    float celsius;
    float fahrenheit;

    // 1. Get the temperature in Celsius from the user
    printf("Enter the temperature in Celsius (°C): ");
    scanf("%f", &celsius);

    // 2. Perform the conversion
    // Formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // 3. Display the result
    // We use %.2f to show the temperature with two decimal places
    printf("\n--- Conversion Result ---\n");
    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}