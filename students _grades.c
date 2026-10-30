/*This proram deetermines student's examination results
 and displays a suitable message for each outcome.*/

 #include <stdio.h>

 int main()
 {
     // variables to be used

    int marks;
    char characters;

    //prompt the user to enter student marks
    printf("Enter the student's marks:");
    scanf("%d", &marks);

    //check for valid marks
    if(marks <0 || marks >100)
    {
        printf("invalid mark");
        return 1;
    }
    //Determining the grades using if, else if, and else

    if(marks >= 70)
    {
        printf("\nDistinction\n-----------\nExallent work on your exam!!\nKeep it up\n");
    }
    else if(marks >=60 && marks <= 69)
    {
        printf("\nCredit\n------\nExallent work!! Aim higher\n");
    }
    else if(marks >=50 && marks <= 59)
    {
        printf("\nPass\n----\nGreat effort!! you can do better\n");
    }
    else
    {
        printf("\nFail\n----\nBelow Average, put more effort\n");
    }


    return 0;
 }

