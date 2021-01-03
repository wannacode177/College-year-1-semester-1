#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("请输入一个十进制整数：");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    printf("这个数的位数是:%d\n", i);
    return 0;
}
