#include <stdio.h>
#include <string.h>
int main()
{
    char c1[20] = {0}, c2[20] = {0}, *p1, *p2;
    printf("Input:");
    gets(c1);
    p1 = c1;
    p2 = c2 + strlen(c1) - 1;
    for (; *p1 != '\0'; p1++, p2--)
    {
        *p2 = *p1;
    }
    *p2 = '\0';
    puts(c1);
    puts(c2);
    return 0;
}