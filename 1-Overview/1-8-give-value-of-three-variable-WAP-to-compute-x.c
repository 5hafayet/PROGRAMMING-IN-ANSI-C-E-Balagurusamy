/*************************
 
 Given values of three variables a,b,c. Write a program to compute and display the value of x, where:

 x = a/(b-c)

  Execute your program for the following values:

 (a) a = 250, b = 85, c = 25
 (b) a = 300, b = 70, c = 70
***************************/

#include <stdio.h>
void main()
{
    int a, b, c;
    float x;
    a = 250, b = 85, c = 25;
    x = a / (b - c);
    printf("x = %3.2f\n", x);
}