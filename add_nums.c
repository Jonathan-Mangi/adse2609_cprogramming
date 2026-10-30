//C program that accepts two numbers, sum them and displays their sum
#include <stdio.h>

int main()
{
    // variables to be used in the program
    int num1, num2, sum;

    // prompt the user for the variables to be added
    printf("please enter the value of the first number to be added:\n");
    // read in the value of the first number
    scanf("%d",&num1);

    printf("please enter the value of the second number to be added:\n");
    // read in the value of the second number
    scanf("%d",&num2);

    // add the two numbers and assign the result to sum
    sum = num1 + num2;
    printf("\n%d + %d = %\n", num1, num2, sum);
    return 0;
}
