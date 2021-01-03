#include <stdio.h>
int main()
{
    char a;
    double b = 0, c = 0, d = 0, e = 0, n = 0;
    int i, test = 0;
    printf("Enter a float number:");
    while ((a = getchar()) != '\n')
    {
        if (a != '.' && test == 0)
        {
            n = n * 10 + a - '0';
            c = n;
        }
        if (a == '.')
        {
            n = b = 0;
            test = 1;
        }
        if (a != '.' && test == 1)
        {
            b = b * 10 + a - '0';
            d = b;
        }
    }
    for (i = 0; i < 3; i++)
    {
        d = d * 0.1;
        e = d;
    }

    printf("answer is:%.2f\n", (c + e) * (c + e) * (c + e));
    return 0;
}