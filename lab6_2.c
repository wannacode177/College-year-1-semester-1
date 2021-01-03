#include <stdio.h>
int max(int a[], int i);
int max(int a[], int i)
{
    int max;
    for (i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
            if (a[i] < a[j])
            {
                int m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
    }
    max = a[0];
}

int main()
{
    int b[5], i;
    printf("enter 5 integers:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("%d\n", max(b, 5));
}
