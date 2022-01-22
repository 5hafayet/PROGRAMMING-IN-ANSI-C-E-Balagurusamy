/***********************

Give two integers 20 and 10. write a program that uses a 
function add() to add these two numebers and sub() to find 
the difference of these two numbers and then display the sum 
and difference in the following form:

20 + 10 = 30
20 - 10 = 10

************************/

#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
void main()
{
    int a = 20;
    int b = 10;
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
}

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int sub(int a, int b)
{
    int c = a - b;
    return c;
}