/*********************
 
 A podouble on the circumference of a circle whose center is(o,o) is (4,5). 
 Write a program to compute perimeter and area of the circle.  

*********************/

#include <stdio.h>
#include <math.h>
#define PI 3.1416

//function declarations
double square(double a);
double distanceOfLine(double x2, double y2);

//main function
void main()
{
    double x2 = 4, y2 = 5, distance, perimeter, area;
    distance = distanceOfLine(4, 5);
    perimeter = 2 * PI * distance;
    area = PI * square(distance);
    printf("Radius of the Circle is %3.3lf \n", distance);
    printf("Perimeter is %3.3lf \nArea is %3.3lf\n", perimeter, area);
}

//function to calculate distance between two point
double distanceOfLine(double x2, double y2)
{
    double x1 = 0, y1 = 0, distance;
    distance = sqrt(square(x2 - x1) + square(y2 - y1));
    return distance;
}

//function to calculate square of a number
double square(double a)
{
    double c = a * a;
    return c;
}