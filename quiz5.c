#include <stdio.h>
void strtoi(char *a, int *b)
{
    int j = 0, sum = 0, sign = 1;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '-')
        {
            sign = -1;
            continue;
        }
        if (a[i] >= '0' && a[i] <= '9' && a[i + 1] != '\0')
        {
            sum = sum * 10 + a[i] - '0';
        }
        if (a[i] == ' ')
        {
            b[j++] = sum * sign;
            sum = 0;
            sign = 1;
        }
        else if (a[i + 1] == '\0')
        {
            sum = sum * 10 + a[i] - '0';
            b[j++] = sum * sign;
            break;
        }
    }
}
int main()
{
    char c[100], ch;
    int d[10] = {0}, i = 0, total = 0;
    printf("Input:");
    while ((ch = getchar()) != '\n')
    {
        c[i++] = ch;
    }
    strtoi(c, d);
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", d[i]);
    }

    for (i = 0; i < 10; i++)
    {
        total = total + d[i];
    }
    printf("Output:%d\n", total);
    return 0;
}