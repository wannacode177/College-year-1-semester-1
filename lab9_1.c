#include <stdio.h>
void extreme(int a[], int n, int *max, int *min)
{
    *max = *min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
        else if (a[i] < *min)
        {
            *min = a[i];
        }
    }
}

int main()
{
    int max = 0, min = 0, b[5] = {10, 20, 30, 6, 8};
    extreme(b, 5, &max, &min);
    printf("% d is max and % d is min.\n", max, min);
    return 0;
}
