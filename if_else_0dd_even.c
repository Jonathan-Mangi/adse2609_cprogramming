/*This program demonstrates the 'if...else' selection constrct. it accepts a whole number and determines whether its even odd.*/

 //pre-processor directives
 #include <stdio.h>

 int main()
 {
      //variables to be used in the program
      int num;
      //prompt and read a whole number from the user
      printf("please enter a number and i'll tell you whether it's odd or even:\n");
      scanf("%d", &num);

    //use the 'if...else' construct to determine whether the number is odd or even
    if(num %2 == 1)

        printf("\n%d is an odd number",num);
    else
        printf("\n%d is an even number",num);

    return 0;


 }

