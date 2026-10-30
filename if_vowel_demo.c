/*This program demonstrates the if selection constrct. it accepts a letter of the alphabets from the user
 and checks if its a vowel.*/

 //pre-processor directives
 #include <stdio.h>
 #include<ctype.h> //includes definition for the 'tolower()' function

 int main()
 {
      //character array to hold user's namespace
 char userletter;

 //prompt the user for a letter of the alphabet
 printf("please enter a letter of the alphabet and i'll tell you whether it's a vowel:\n");
 scanf("%c", &userletter);

 //convert the user's input to lowercase
 userletter= tolower(userletter);

 //check whether the letter is a vowel
 if(userletter == 'a' || userletter == 'e' || userletter == 'i' || userletter == 'o' || userletter == 'u')
    printf("\n%c is a vowel.",userletter);

 return 0;

 }

