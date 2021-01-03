#include <stdio.h>
//用户输入一个底数一个指数，计算底数的指数幂.
double power(int base, int exp);
double power(int base, int exp)
{
    int i;
    double result = 1;
    if (exp > 0)
    {
        for (i = 0; i < exp; i++)
        {
            result = base * result;
        }
    }
    if (exp == 0)
    {
        result = 1;
    }
    if (exp < 0)
    {
        for (i = 0; i > exp; i--)
        {
            result = base * result;
        }
        result = (1.0 / result);
    }

    return result;
}
int main()
{
    int base, exp;
    printf("Please enter a base and an exp(both are integers):");
    scanf("%d %d", &base, &exp);
    printf("The answer is:%.2lf\n", power(base, exp));
    return 0;
}
