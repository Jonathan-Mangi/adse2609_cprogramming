/*This program accepts student details.It can store and display their details.*/

#include <stdio.h>

int main()
{
    int age;
    float marks;
    char grade;

  //prompt the user to enter the student's age
    printf("Enter the student's age:");
    scanf("%d", &age);

  //prompt the user to enter the student's marks
    printf("\nEnter the student's marks:");
    scanf("%f", &marks);
    if(marks <0 || marks >100)
    {
        printf("Invalid marks");
        return 1;
    }

  //Auto fill grade based on marks using else if
    if(marks >= 75)
    {
       grade = 'A';
    }
    else if(marks >= 65 && marks <= 74)
    {
        grade = 'B';
    }
    else if(marks >= 45 && marks <= 64)
    {
        grade = 'C';
    }
    else if(marks >= 30 && marks <= 44)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
        printf("\nFailed\n");
    }



    //Display all the student's details
    printf("\nSTUDENT DETAILS");
    printf("\n===============");
    printf("\nstudent's age: %d", age);
    printf("\nstudent's marks: %.2f", marks);
    printf("\nstudent's grade: %c", grade);

    return 0;


}
