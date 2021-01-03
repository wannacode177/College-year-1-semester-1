#include<stdio.h>
int main()
{
    int a[5][5],i,j;
    printf("Please enter a 5*5 matrix:\n");
    for (i = 0; i < 5; i++)
    {
        printf("line %d ", i + 1);
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The transpose of matrix a is :\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("%d ",a[j][i]);
        }
    }
 printf("\n");
 return 0;
}