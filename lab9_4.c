#include <stdio.h>
#include <string.h>
int main()
{
    char c1[100], c2[100], c3[100], temp[100];
    printf("Input:");
    gets(c1);
    gets(c2);
    gets(c3);
    strcpy(temp, c2);
    strcpy(c2, c3);
    strcpy(c3, temp);
    printf("Output:");
    puts(c1);
    puts(c2);
    puts(c3);
    return 0;
}