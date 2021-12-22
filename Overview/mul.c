int mul(int a, int b);

main()
{
    int a, b, c;
    a = 10;
    b = 5;
    c = mul(a, b);
    printf("%d * %d = %d\n", a, b, c);
}

int mul(int x, int y)
{
    int p;
    p = x * y;
    return (p);
}