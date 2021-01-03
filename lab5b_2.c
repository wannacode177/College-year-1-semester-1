//translate letters into numbers
#include <stdio.h>
int main()
{
    char a;
    printf("Enter phone number:");
    while ((a = getchar()) != '\n')
    {
        if (a == 'A' || a == 'B' || a == 'C')
        {
            printf("2");
        }
        if (a == 'D' || a == 'E' || a == 'F')
        {
            printf("3");
        }
        if (a == 'G' || a == 'H' || a == 'I')
        {
            printf("4");
        }
        if (a == 'J' || a == 'K' || a == 'L')
        {
            printf("5");
        }
        if (a == 'M' || a == 'N' || a == 'O')
        {
            printf("6");
        }
        if (a == 'P' || a == 'Q' || a == 'R' || a == 'S')
        {
            printf("7");
        }
        if (a == 'T' || a == 'U' || a == 'V')
        {
            printf("8");
        }
        if (a == 'W' || a == 'X' || a == 'Y' || a == 'Z')
        {
            printf("9");
        }
        if (a=='-'||a>=48&&a<=57)
        {
            printf("%c",a);
        }
    }
    printf("\n");
    return 0;
}