#define PRINCIPLE 5000
#define PERIOD 10

main()
{
    int year;
    float amount, value, inrate;

    amount = PRINCIPLE;
    inrate = 0.11;
    year = 0;

    while (year <= PERIOD)
    {
        printf("%2d  %8.2f\n", year, amount);
        year = year + 1;
        value = amount + amount * inrate;
        amount = value;
    }
}