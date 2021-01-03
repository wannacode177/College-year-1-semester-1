//sort 10 numbers from large to small.
#include <stdio.h>
int main()
{
    int a[10], i, j, min;
    printf("Please enter 10 integers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
            if (a[i] < a[j])
            {
                min = a[i];
                a[i] = a[j];//only this row goes to row 23.
                a[j] = min;
            }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}