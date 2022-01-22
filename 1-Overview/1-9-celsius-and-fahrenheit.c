/*********************

Relationship between Celsius and Fahrenheit is governed by the formula

    F = (9c/5)/32

Write a program to convert the temperature 
(a) from Celsius to Fahrenheit and 
(b) from Fahrenheit to Celsius.

*********************/

#include <stdio.h>
void main()
{
    int celsius = 30;
    int fahrenheit = 100;
    float c, f;

    f = ((9 * celsius) / 5) + 32;
    c = ((fahrenheit - 32) * 5) / 9;
    printf("30 Degree in Fahrenheit %2.2f\n", f);
    printf("100 Degree in Celsius is %2.2f\n", c);
}