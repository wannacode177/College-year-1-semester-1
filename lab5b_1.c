#include <stdio.h>
int main()
{
    int n, i, s;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i*i <= n; i++)
    {
        s = i * i;
        if (s % 2 == 0)
        {
            printf("%d\n", s);
        }
    }
    return 0;
}