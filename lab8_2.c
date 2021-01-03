#include <stdio.h>
int a[10];
int *find_largest(int a[], int n)
{
    if (n == 0)
    {
        return &a[0];
    }
    else
    {
        if (a[n] > *find_largest(a, n - 1))
        {
            return &a[n];
        }
        else
        {
            return find_largest(a, n - 1);
        }
    }
}
int main()
{
    int i, *largest;
    printf("Enter 10 integers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    largest = find_largest(a, 10);
    printf("The largest integer is %d\n",*largest);
    printf("And here's its place:%u\n", largest);
    return 0;
}