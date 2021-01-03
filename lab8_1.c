#include <stdio.h>
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
}
void swap(int *p, int *q)
{
    int temp1;
    temp1 = *p;
    *p = *q;
    *q = temp1;
}
void sort(int a2[], int start2)
{
    for (int i = 0; i < start2; i++)
    {
        int temp2 = min(a2, i, 5);
        for (int j = 0; j < start2; j++)
        {
            if (a2[i] < a2[j])
            {
                swap(&a2[i], &a2[j]);
            }
        }
    }
}
int main(int argc,char *argv[])
{
    int a[5],i;
    printf("enter 5 integers:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, 5);
    printf("sorted numbers are:");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("%s\n",argv[0]);//newly attached in 12.21.
    return 0;
}