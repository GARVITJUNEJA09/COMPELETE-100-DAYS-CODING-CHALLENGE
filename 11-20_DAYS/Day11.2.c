//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    // We use 'float' so we can handle money with cents (like $10.50).
    float cost_price;     // The original price (CP)
    float selling_price;  // The sale price (SP)
    float amount_diff;    // This will hold the profit amount or the loss amount
    float percentage;     // This will hold the final percentage

      // Ask for the first price (Cost Price)
    printf("Enter what you BOUGHT the item for (Cost Price): $");
    scanf("%f", &cost_price);
    // Read the number the user typed and store it in cost_price
    if (cost_price <= 0) {
        printf("Error: Please enter a valid, positive number for the Cost Price.\n");
        return 1; // Exit the program if input is bad
    }

    // Ask for the second price (Selling Price)
    printf("Enter what you SOLD the item for (Selling Price): $");
    scanf("%f", &selling_price);
    // Read the number and store it in selling_price
    if (selling_price <= 0) {
        printf("Error: Please enter a valid number for the Selling Price.\n");
        return 1; // Exit the program if input is bad
    }

  // --- 2. Calculate Profit or Loss ---

    if (selling_price > cost_price) {
        // This is the **PROFIT** situation: We sold it for MORE than we bought it.
        
        amount_diff = selling_price - cost_price; // Calculate the profit amount
        
        // Calculate Profit Percentage: (Profit Amount / Cost Price) * 100
        percentage = (amount_diff / cost_price) * 100;
        
        printf("🎉 PROFIT!\n");
        printf("You gained: $%.2f\n", amount_diff);
        printf("Profit Percentage: %.2f%%\n", percentage);

    } else if (selling_price < cost_price) {
        // This is the **LOSS** situation: We sold it for LESS than we bought it.
        
        amount_diff = cost_price - selling_price; // Calculate the loss amount
        
        // Calculate Loss Percentage: (Loss Amount / Cost Price) * 100
        percentage = (amount_diff / cost_price) * 100;
        
        printf("📉 LOSS!\n");
        printf("You lost: $%.2f\n", amount_diff);
        printf("Loss Percentage: %.2f%%\n", percentage);
        
    } else {
        
         printf(" BREAK-EVEN!\n");
        printf("The Selling Price equals the Cost Price. There is 0%% profit or loss.\n");
    }

    return 0; 
}