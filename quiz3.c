#include <stdio.h>//“7 1 5 6 8”这一组数据出错，没有输出5.
int main()
{
    int a[5], i, min, n, b[5], c = 0;
    printf("Please enter 5 integers:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
            if (a[i] > a[j])
            {
                min = a[i];
                a[i] = a[j];
                a[j] = min;
            }
    }
    a[0] = a[0] * 10;
    for (i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    for (i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
            if (a[i] > a[j])
            {
                min = a[i];
                a[i] = a[j];
                a[j] = min;
            }
    }
    for (i = 0; i < 5; i++)
    {
        if (a[0] != b[i])
        {
            c++;
        }
        else
        {
            break;
        }
    }
    printf("The order of the extended smallest integer now is %d\n", c + 1);
    return 0;
}