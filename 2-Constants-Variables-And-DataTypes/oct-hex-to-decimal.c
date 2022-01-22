#include <stdio.h>
void main()
{
    int octal, hexadecimal;
    octal = 010;
    hexadecimal = 0Xab;
    printf("Octal: %o in decimal is %d\n", octal, octal);
    printf("Hex: %x in decimal is %d\n", hexadecimal, hexadecimal);
}