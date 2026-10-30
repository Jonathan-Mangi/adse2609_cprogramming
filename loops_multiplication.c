#include <stdio.h>

int main()
{
    int number;

    // 1. Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input! Eenter numbers only.\n");
        return 1;
    }

    // 2. Check if the user entered zero or a negative number
    if (number <= 0)
    {
        printf("Error: Enter a positive integer greater than zero.\n");
        return 1;
    }

    // 3. Display the table title
    printf("\nMultiplication table for %d\n", number);
    printf("--------------------------\n");

    // 4. Use a loop with a counter variable (i) to generate the table from 1 to 12
    for (int i = 1; i <= 12; i++)
    {
        // Use arithmetic operators to calculate the result
        int result = number * i;

        // Display the formatted multiplication line
        printf("%d x %d = %d\n", number, i, result);
    }

    return 0;
}
