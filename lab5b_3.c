#include <stdio.h>
int main()
{
    int i = 0;
    char ch;
    printf("输入一句英文的句子：");
    while ((ch = getchar()) != '\n')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            i++;
        }
    }

    printf("输入的句子中元音字母的个数为:%d\n", i);
    return 0;
}