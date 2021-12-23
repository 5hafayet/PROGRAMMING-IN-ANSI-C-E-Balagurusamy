/*************************

Given the radius of a circle, WAP to compute and display its area. 
Use symbolic constant to define the PI value and assume a suitable value for radius.

*************************/

#include <stdio.h>
#define PI 3.14
void main()
{
    float radius, area;
    radius = 5;

    area = PI * radius * radius;
    printf("%5.2f\n", area);
}