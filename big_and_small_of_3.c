/* This program accepts three numbers from the user, displays the largest and the smallest numbers,
using comparison, logical operators. */

//pre-processor directive
#include <stdio.h>

//main function provides the entry to the program
int main()

{
    // variables to be used on the program
    int num1, num2, num3;

    //prompt the user for the first number
    printf("please enter the first number: \n");
    scanf("%d", &num1);

    //prompt the user for the second number
    printf("please enter the second number: \n");
    scanf("%d", &num2);

    //prompt the user for the third number
    printf("please enter the third number: \n");
    scanf("%d", &num3);

    //Finding the largest:
    //using comparison(>) and logical AND (&&);
    int largest = (num1 >= num2 && num1 >= num3) ? num1:
        ((num2 >= num1 && num2 >= num3) ? num2 : num3);

    //Finding the smallest:
    //using comparison (<) and logical AND (&&);
    int smallest = (num1 <= num2 && num1 <= num3) ? num1 :
        ((num2 <= num1 && num2 <= num3) ? num2 : num3);

    //Display the results
    printf("Largest number is : %2d\n", largest);
    printf("smallest number is : %2d\n", smallest);

    return 0;

}
