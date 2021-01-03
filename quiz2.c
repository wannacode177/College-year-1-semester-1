#include <stdio.h>
int main()
{
    int a[10] = {0};
    int i, n;
    printf("Enter 10 integers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 3)
        {
            n = i;
            printf("found 3 in position%d\n", n + 1);
            break;
        }
    }
    if (a[i] != 3)
    {
        printf("no 3\n");
    }
    return 0;
}
