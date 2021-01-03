#include <stdio.h>
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = (dollars / 20);
    *tens = (dollars % 20 / 10);
    *fives = (dollars % 10 / 5);
    *ones = (dollars % 5);
}
int main()
{
    int amount, a, b, c, d;
    printf("Enter a dollar amount:");
    scanf("%d", &amount);
    pay_amount(amount, &a, &b, &c, &d);
    printf("$20 bills:%d\n", a);
    printf("$10 bills:%d\n", b);
    printf("$5 bills:%d\n", c);
    printf("$1 bills:%d\n", d);
    return 0;
}