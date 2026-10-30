/* this program demonstrate the variouse comparison and logical opeerators in C, to compare two intagers and display the result.
NB: Comparison operators produce 1 for "true" and 0 for "false".*/

//pre-processor directives
#include<stdio.h>

int main()
{
    //variables to be used the program
    int firstNum =10, secondNum =7;

    //display the value of the above variables
    printf("values of\'firstNum\' and secondNum' are %d and %d respectvely.", firstNum, secondNum);

    //demonstrate the various comparison operators
    printf("\nCOMPARISON OPERATORS");
    printf("\n===================================");

    //equal to '==' operator
     printf("\n%d equal to (==) %d? %d", firstNum,secondNum,firstNum == secondNum);

    //not equal to '!='operator
     printf("\n%d not equal to (!=) %d? %d", firstNum,secondNum,firstNum != secondNum);

    //greator than'>'operator.
     printf("\n%d greater than (>) %d? %d", firstNum,secondNum,firstNum > secondNum);

    //greater than or equal to'>=' operator
     printf("\n%d greater than or equal to (>=) %d? %d", firstNum,secondNum,firstNum >= secondNum);

    //less than '<' operator
     printf("\n%d less than to (<) %d? %d", firstNum,secondNum,firstNum < secondNum);

    //less than or equal to'<=' operator
     printf("\n%d lessthan or equal to (<=) %d? %d", firstNum,secondNum,firstNum <= secondNum);

      printf("\n===================================");

    //demonstrate the variouse logical operators
    printf("\LOGICAL OPERATORS");

    printf("\n===================================");

    //logical AND: evaluate to true when both expressions are true.
    printf("\nLOGICAL AND(&&)");
    printf("\n(%d > %d) && (%d>0)=%d", firstNum, secondNum,(firstNum > secondNum)&& (firstNum>0));

    //logical AND: evaluate to true when at least one expression is true.
    printf("\nLOGICAL AND(||)");
    printf("\n(%d < %d) || (%d<0)=%d", firstNum, secondNum,(firstNum > secondNum)|| (firstNum<0));

    //logical AND: reverses truth value of expression (true> false and false>true).
    printf("\nLOGICAL NOT(!)");
    printf("\n(%d < %d) \n! (%d<0)=%d", firstNum, secondNum,(firstNum > secondNum),! (firstNum>0));

    printf("\n===================================");


    return 0;
}
