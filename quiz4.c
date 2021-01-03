#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int jiecheng(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * jiecheng(n - 1);
    }
}

int main()
{
    int a, b, c;
    printf("Please enter an integer:");
    scanf("%d", &a);
    b = jiecheng(a);
    c = fibonacci(a);
    printf("result is:%d\n", b / c);
    return 0;
}