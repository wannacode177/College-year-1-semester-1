#include <stdio.h>
#include <string.h>
int Strstr(char *c1, char *c2)
{
    int j = 0;
    int m = strlen(c1); //计算两字符串c1长度
    int n = strlen(c2); //计算字符串c2长度
    if (n == 0)
    {
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        int k = i;
        while (c1[k] == c2[j] && j < n)
        {
            k++;
            j++; //比较各字符是否相等来确定c1中是否存在c2
            if (c1[k] != c2[j] && j < n)
            {
                break; //当c2和c1一样长或两字符串出现不等时跳出比较循环to line 21--return -1
            }
        }
        if (j == n)
        {
            return i; //比较到第n个（c2[n-1]），如果都相等则说明存在，返回c1中与c2第一个相同字符的编号
        }
    }
    return -1;
}
int main()
{
    char c1[100], c2[100], c;
    puts("Input:");
    gets(c1);
    gets(c2);
    c = Strstr(c1, c2);
    printf("%d\n", c);
    return 0;
}
