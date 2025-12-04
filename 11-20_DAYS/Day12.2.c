/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>

int main() {
    int units_consumed;
    float total_bill = 0.0;
    
    
    printf("Electricity Consumption Calculation System\n");
    printf("Please enter the total units consumed for the billing period: ");

    if (scanf("%d", &units_consumed) != 1 || units_consumed < 0) {
        printf("ERROR: Invalid data entry. Input must be a non-negative integer.\n");
        return 1;
    }

    if (units_consumed == 0) {
        printf("Consumption: 0 Units. Total Bill Amount: Rs. 0.00\n");
        return 0;
    }

    
    // Scenario 4: Consumption exceeds 300 units
    if (units_consumed > 300) {
        // Calculate the charge for units above 300 at 12/unit.
        int units_over_300 = units_consumed - 300;
        total_bill += units_over_300 * 12.0;
        
        // Add the fixed charge for the first 300 units (Rs. 2200).
        total_bill += 2200.0; 
    }
    
    // Scenario 3: Consumption is between 201 and 300 units
    else if (units_consumed > 200) {
        // Calculate the charge for units from 201 to 300 at 10/unit.
        int units_over_200 = units_consumed - 200;
        total_bill += units_over_200 * 10.0;
    
        // Add the fixed charge for the first 200 units (Rs. 1200).
        total_bill += 1200.0; 
    }

    // Scenario 2: Consumption is between 101 and 200 units
    else if (units_consumed > 100) {
        // Calculate the charge for units from 101 to 200 at 7/unit.
        int units_over_100 = units_consumed - 100;
        total_bill += units_over_100 * 7.0;
        
        // Add the fixed charge for the first 100 units (Rs. 500).
        total_bill += 500.0; 
    }

    // Scenario 1: Consumption is 100 units or less
    else { 
        total_bill = units_consumed * 5.0; // Charge all units at the 5/unit rate.
    }

    printf("Total Units Consumed: %d\n", units_consumed);
    printf("Net Calculated Bill Amount: Rs. %.2f\n", total_bill);

    return 0;
}