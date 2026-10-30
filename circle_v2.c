/* this program accepts the raious of a circle from the user, calculates and displays
its area, and circumference, using in-built functions.*/

//pre-processor directive
#include<stdio.h>
#include<math.h>
#define MYPI 3.141593// Define pi as a constant

//main function provides the entry point to the program

int main()
{
    // Variables to be used in the program
    float radius, area, circumference;

    //prompt the user for the circle's radius
    printf("please enter the radius of the circle in cm.\n");
    scanf("%f",&radius);

    //calculate the area and circumference of the circle
    area= MYPI *pow(radius,2);
    circumference = MYPI*(radius* 2);

    //Display the circle's dimensions
    printf("\ncircle's Dimensions");
    printf("\n----------------------------------------------");
    printf("\n%-13s:%6.2f cm.","Radius",radius);
    printf("\n%-13s:%6.2f cm².","Area",area);
    printf("\n%-13s:%6.2f cm.","Circumference",circumference);
    printf("\n----------------------------------------------");

    return 0;

}
