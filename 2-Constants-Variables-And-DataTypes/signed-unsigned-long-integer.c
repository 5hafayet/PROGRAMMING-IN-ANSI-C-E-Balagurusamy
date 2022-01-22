#include <stdio.h>
void main()
{
    int x, y;
    x = 3047483647;
    y = 3047483647U;
    printf("%d\n", x); //It will be printed wrong as it crossed the integer length of (2^32/2)=2147483647 on 32 bit computer
    printf("%u\n", y); //But it will be printed right as it is mentioned as U or unsigned integer. so it can print up to 2^32 also we can print UL(Unsigned Integer) in the same way.
}