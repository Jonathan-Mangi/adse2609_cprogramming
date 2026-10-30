/*This program accepts the user's score in an exam and tells the user whether they've passed or not. The pass mark is 55%*/

 //pre-processor directives
 #include <stdio.h>

 int main()
 {
      // variables to be used
      int score;

      //prompt the user to enter their score
      printf("please enter your score:");
      scanf("%d", &score);

      //check for a valid score
      if(score < 0 || score > 100)
        {
          printf("Invalid score! please enter a number between 0 and 100\n");
          return 1;
       }

    //user must enter a valid score 0-100
    if(score >= 55)
        {
          printf("You have passed\n");
        }

        else


       if(score <= 55){
           printf("You have failed\n");
       }

       return 0;

 }
