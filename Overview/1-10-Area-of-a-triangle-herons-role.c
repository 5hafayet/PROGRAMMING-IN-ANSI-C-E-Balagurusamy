/****************************
 
 Area of a triangle is given by the formula 
  
    A = sqrt(s(s-a)(s-b)(s-c))
where a, b and c are sides of the triangle and 2s = a+b+c. Write a program to compute the area of the triangle given the values of a, b, c.

*****************************/

#include <stdio.h>
#include <math.h>
void main()
{
    int a = 5, b = 12, c = 13;
    float s = (a + b + c) / 2;

    double temp, area;
    temp = (s * (s - a) * (s - b) * (s - c));
    area = sqrt(temp);
    printf("area is %4.2lf/n", area);
}
