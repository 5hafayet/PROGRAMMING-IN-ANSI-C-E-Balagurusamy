/*****************************
 WAP to display the following simple arithmetic calculator

     _______              _______
x = |_______|        y = |_______|
       _______                     _______
sum = |_______|      difference = |_______|
           _______                   _______
Product = |_______|      Divison =  |_______|

*****************************/

#include <stdio.h>
void main()
{
    int x = 10, y = 5, sum, difference, product, division;
    sum = x + y;
    difference = x - y;
    product = x * y;
    division = x / y;

    printf("x       = %d      Y           = %d\n", x, y);
    printf("Sum     = %d      Difference  = %d\n", sum, difference);
    printf("Product = %d      Division    = %d\n", product, division);
}