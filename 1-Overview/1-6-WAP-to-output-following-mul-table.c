/*******************

WAP to output follwing multiplication table:

    5 * 1 = 5
    5 * 2 = 10
    .   .   .
    .   .   .
    5 * 10 = 50

*********************/

#include <stdio.h>
void main()
{
    int a, b, c;
    a = 5;
    b = 1;
    while (b <= 10)
    {
        c = a * b;
        printf("%d * %d = %d\n", a, b, c);
        b = b + 1;
    }
}