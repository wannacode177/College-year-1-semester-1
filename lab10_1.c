#include <stdio.h> //-->from number 23
int stoi(char a[]) //将读取的字符串转化为整数
{
    int sum = 0, sign = 1;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (i == 0 && a[i] == '-')
        {
            sign = -1;
            continue;
        }
        sum = sum * 10 + a[i] - '0';
    }
    return sum * sign;
}
int main(int argc, char *argv[])
{
    int min = 0;

    if (argc == 1)
    {
        printf("The program needs at least one integer parameter to run!\n");
    }
    else if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            if (*argv[i] >= '0' && *argv[i] <= '9' || *argv[i] == '-') //integer situation
            {
                min = 0;
                for (int i = 1; i < argc; i++) //find minimun
                {
                    if (i == 1)
                    {
                        min = stoi(argv[i]);
                        continue;
                    }
                    if (min > stoi(argv[i]))
                    {
                        min = stoi(argv[i]);
                    }
                }
            }
            else //noninteger situation
            {
                printf("The parameter has to be an integer format!\n");
                return 0;
            }
        }
        printf("Min parameter is %d\n", min);
        return 0;
    }
}
