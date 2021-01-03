#include <stdio.h> //sort from small to big
int min(int a1[], int start, int end1)
{
    int m = start;
    for (int i = start; i < end1; i++)
    {
        if (a1[start] > a1[i])
        {
            m = a1[i];
        }
        else
        {
            m = a1[start];
        }
    }
    return m;
} //得出了数组里的最小值.

void sort(int a2[], int end2)
{
    int i, j, temp = 0;
    for (i = 0; i < end2; i++)
    {
        temp = min(a2, i, 5);
        for (j = i + 1; j < end2; j++)
        {
            if (a2[j] < a2[i])
            {
                temp = a2[i];
                a2[i] = a2[j];
                a2[j] = temp;
            }
        }
    }
    return;
}

int main()
{
    int i, a[5];
    printf("enter 5 integers:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, 5);
    printf("sorted integers are:");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}