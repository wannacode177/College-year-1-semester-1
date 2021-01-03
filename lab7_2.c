#include <stdio.h>
int fi(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    int result = fi(n - 1) + fi(n - 2);
    return result;
}

int main()
{
    int n;
    printf("Please enter a number that will be used to find fibonacci number in corresponding place :");
    scanf("%d", &n);
    printf("That place's fibonacci number is %d.\n", fi(n));
    return 0;
}