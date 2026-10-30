/*This program calculates the total cost of items purchased at a shop.*/

#include <stdio.h>

int main()
 {
    // variables to be used
    float price = 0.0f;          // Price per item
    int quantity = 0;            // Number of items purchased
    float total_cost = 0.0f;     // Total cost (price * quantity)
    float discount = 0.0f;       // 10% discount amount (if applicable)
    float final_amount = 0.0f;   // Final amount payable after discount

    // Prompt the user for the price
    printf("Enter the price of the item: ");
    if (scanf("%f", &price) != 1 || price < 0)
        {
        printf("Invalid price entered.\n");
        return 1;
        }

    // Prompt the user for the quantity of items
    printf("Enter the quantity purchased: ");

    if (scanf("%d", &quantity) != 1 || quantity < 0)
        {
        printf("Invalid quantity entered.\n");
        return 1;
        }

    // calculating the total cost
    total_cost = price * quantity;

    // Applying 10% discount if total cost is at least KSh 1,000
    if (total_cost >= 1000.0)
        {
        discount = total_cost * 0.10;
        }

    final_amount = total_cost - discount;

    // 4. Displaying the results
    printf("\n=== Payment Summary ===\n");
    printf("Total Cost: KSh %.2f\n", total_cost);
    printf("Discount: KSh %.2f\n", discount);
    printf("Final Amount Payable: KSh %.2f\n", final_amount);

    return 0;
}
