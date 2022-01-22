/*************************
 
 Distance between two points(x1,y1) and (x2,y2) is governed by the formula 

    D^2 = (x2-x1)^2 + (y2-y1)^2

 Write a program to compute D given the coordinates of the points.

 ****************************/

#include <stdio.h>
#include <math.h>

int square(int a);

void main()
{
    double x1, x2, y1, y2, distance;

    x1 = 5, x2 = 10, y1 = 10, y2 = 5;

    distance = sqrt(square(x2 - x1) + square(y2 - y1));
    printf("Distance is %3.3lf\n", distance);
}

int square(int a)
{
    int c = a * a;
    return c;
}