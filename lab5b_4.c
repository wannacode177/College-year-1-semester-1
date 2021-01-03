//逐次检测用户输入的一些整数中的每个数是否有重复数字.
#include <stdio.h>
int main()
{

    int a[10] = {0}, n, t = 0, i;
start:
    t = 0;
    printf("Enter integer:");//must enter 35 first...or row31 will be negelected
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("byebye!\n");
        return 0;
    }
    while (n > 0)
    {
        a[n % 10] = a[n % 10] + 1;
        n = n / 10;
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 1)
        {

            t = 1;
            printf("%d %d\n", i, a[i]);
            goto start;
        }
    }
    if (t == 0)
    {
        printf("no repeated numbers!\n");
        goto start;
    }
}