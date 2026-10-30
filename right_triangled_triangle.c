/* this program accepts the base and height of a right angled triangle from the user, calculates and displays
its area, and perimeter, using in-built functions.*/

//pre-processor directive
#include<stdio.h>
#include<math.h>


//main function provides the entry point to the program

int main()
{
    // Variables to be used in the program
    float base,height, area, perimeter;

    //prompt the user for the triangle's base
    printf("please enter the dimensions of the triangle's in cm.\n");
    scanf("%f",&base);

 //prompt the user for the triangle's height
    printf("please enter the triengle's height in cm.\n");
    scanf("%f",&height);

    //Declare and calculate the triangle's hypotenuse
   float  hypotenuse = sqrt((pow(height,2)+pow(base,2)) );

    //calculate the area and perimeter of the right angled triangle
    area = .5*base*height;
    perimeter = base + height + hypotenuse;

    //Display the triangle's dimensions
    printf("\nTriangle's Dimensions");
    printf("\n----------------------------------------------");
    printf("\n%-13s:%6.2f cm.","Base",base);
    printf("\n%-13s:%6.2f cm².","Height",height);
    printf("\n%-13s:%6.2f cm.","Hypotenuse",hypotenuse);
    printf("\n%-13s:%6.2f cm.","Area",area);
    printf("\n%-13s:%6.2f cm.","Perimeter",perimeter);
    printf("\n----------------------------------------------");

    return 0;

}
