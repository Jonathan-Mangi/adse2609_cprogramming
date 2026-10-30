/*This program displays a restaurant bill, heading for for items, quanity, it  calculates the price of each item
  and the grand total, format monetary values to 2 decimal places and aligns the columns neatly using printf()
  format specifiers.*/

#include <stdio.h>

int main()
{
    // 1. Store quantities and unit prices in variables
    int qty_chips = 2;
    int qty_burger = 1;
    int qty_juice = 3;

    float price_chips = 150.00;
    float price_burger = 350.00;
    float price_juice = 100.00;

    // 2. Calculate the cost of each item
    float total_chips = qty_chips * price_chips;
    float total_burger = qty_burger * price_burger;
    float total_juice = qty_juice * price_juice;

    // 3. Calculate the grand total
    float grand_total = total_chips + total_burger + total_juice;

    // 4. Display the bill headings with neat column alignment
    printf("\n");
    printf("===============================================================\n");
    printf("                       RESTAURANT BILL                         \n");
    printf("===============================================================\n");
    printf("%-14s %8s %12s %12s\n", "Item", "Quantity", "Unit Price", "Total Price");
    printf("---------------------------------------------------------------\n");

    // 5. Display each item row with formatted monetary values (2 decimal places)
    printf("%-14s %8d KSh %9.2f KSh %11.2f\n", "Chips", qty_chips, price_chips, total_chips);
    printf("%-14s %8d KSh %9.2f KSh %11.2f\n", "Beef burger", qty_burger, price_burger, total_burger);
    printf("%-14s %8d KSh %9.2f KSh %11.2f\n", "Fresh juice", qty_juice, price_juice, total_juice);

    // 6. Display the grand total separator and final amount
    printf("---------------------------------------------------------------\n");
    printf("%-38s KSh %11.2f\n", "Grand Total:", grand_total);
    printf("===============================================================\n");

    return 0;
}
