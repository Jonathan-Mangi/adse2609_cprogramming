// C program that accepts an amount of money and the prices of two products, then calculates the change
#include <stdio.h>

int main()
{
    // variables to be used in the program
    int amount, sugar, milk, total_cost, change;

    //prompt the user for the total amount if money
    printf("enter amount: kes. ");
    scanf("%d", &amount);

    // prompt the user for the price of sugar
    printf("enter price of sugar: kes. ");
    scanf("%d", &sugar);

    // prompt the user for the price of milk
    printf("enter price of milk: kes. ");
    scanf("%d", &milk);

    // calculate the cost of the remaining change
    total_cost = sugar + milk;
    change = amount - total_cost;

    //display the amount in the requested format
    printf("\amount: kes. %d\n", amount);
    printf(" sugar: kes. %d\n", sugar);
    printf(" milk: kes. %d\n", milk);
    printf(" change: kes. %d\n", change);

    return 0;

}
