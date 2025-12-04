//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h> // We need this to use the 'pow' function for compound interest

int main() {
    // We use 'float' because money and rates often have decimal places.
    float principal; // The starting amount of money
    float rate;      // The annual interest rate (as a percentage, e.g., 5)
    float time;      // The time in years
    
    float simpleInterest;
    float compoundInterest;
    float totalAmount;

    // 1. Get Input from the user
   
    printf("Enter the starting Principal amount : ");
    scanf("%f", &principal);

    printf("Enter the Annual Rate : ");
    scanf("%f", &rate);

    printf("Enter the Time in years : ");
    scanf("%f", &time);

    // Convert the rate from percentage (like 5) to a decimal (like 0.05)
    float decimalRate = rate / 100.0;

    // 2. Calculate Simple Interest (SI)
    // Formula: SI = Principal * Rate * Time
    simpleInterest = principal * decimalRate * time;

    // 3. Calculate Compound Interest (CI)
    // Formula for Total Amount: Amount = Principal * (1 + Rate)^Time
    
    // First, find the total amount using the 'pow' function (power)
    totalAmount = principal * pow(1 + decimalRate, time);

    // Then, find the interest earned by subtracting the original principal
    compoundInterest = totalAmount - principal;

    // 4. Display Results
    printf("\n--- Results ---\n");
    printf("You started with: %.2f\n", principal);
    printf("Rate: %.2f%%\n", rate);
    printf("Time: %.2f years\n", time);
    printf("------------------------------------\n");
    printf("SIMPLE INTEREST EARNED:   %.2f\n", simpleInterest);
    printf("COMPOUND INTEREST EARNED: %.2f\n", compoundInterest);
    printf("TOTAL AMOUNT WITH COMPOUND INTEREST: %.2f\n", totalAmount);
   
    return 0;
}