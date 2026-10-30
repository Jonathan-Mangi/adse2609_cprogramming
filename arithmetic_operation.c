/* this program demonstrates the various arithmetic operators in C and field width modifiers to align the output.*/

// pre-processor directives
#include <stdio.h>


int main()
{
// variables to be used in the program
int firstNum =8, secondNum =5;


//display the values of the above variables

printf("values of 'firstNum' and 'seconNum' are %d and %d respectively.",
       firstNum, secondNum);

//perform the various arithmetic operation and display their results
printf("\n%15s: %d + %d = %2d","Addition" ,firstNum,secondNum,firstNum + secondNum);
printf("\n%15s: %d * %d = %2d","Multiplication", firstNum,secondNum,firstNum * secondNum);
printf("\n%15s: %d - %d = %2d", "Subraction",firstNum,secondNum,firstNum - secondNum);
printf("\n%15s: %d ÷ %d = %2d","Division" ,firstNum,secondNum,firstNum / secondNum);
printf("\n%15s: %d %% %d = %2d","Modulus", firstNum,secondNum,firstNum % secondNum);



return 0;
}

has context menu


has context menu
