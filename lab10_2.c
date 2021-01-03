#include <stdio.h> //-->from number 23
int date[6], j = 0;
int years(int y1, int y2)//计算两年间相差多少天
{
    int s = (y2 - y1) * 365;
    for (int i = y1; i < y2; i++)
    {
        if ((i % 4 == 0) && (i % 100 != 0) || i % 400 == 0)
        {
            s++;
        }
    }
    return s;
}
int days(int y, int m, int d)//计算该年到该日期已经经过多少天
{
    int s = 0;
    for (int i = 1; i <= m; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            s = s + 31;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            s = s + 30;
        }
        else if (i == 2)
        {
            if (y % 400 == 0 || (y % 4 == 0) && (y % 100 != 0))
            {
                s = s + 29;
            }
            else
            {
                s = s + 28;
            }
        }
    }
    s = s + d;
    return s;
}
void stoi(char a[]) //将读取的字符串转化为整数,以“/”为区分年、月的判断符，以下一位是否为'\0'判断日
{
    int sum = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= '0' && a[i] <= '9' && a[i + 1] != '\0')
        {
            sum = sum * 10 + a[i] - '0';
        }
        else if (a[i] == '/')
        {
            date[j++] = sum;
            sum = 0;
        }
        else if (a[i + 1] == '\0')
        {
            sum = sum * 10 + a[i] - '0';
            date[j++] = sum;
            sum = 0;
        }
    }
}
int main(int argc, char *argv[])
{
    int day1, day2, year;
    /*for (int i = 0; i < argc; i++)
    {
        printf("Argument %d is %s.\n", i, argv[i]);
    }*/
    stoi(argv[1]);
    stoi(argv[2]);
    //printf("%d %d %d %d \n", date[1], date[2], date[4], date[5]);
    day1 = days(date[0], date[1], date[2]);
    day2 = days(date[3], date[4], date[5]);
    year = years(date[0], date[3]);
    //printf("%d,%d,%d\n", day1, day2, year);
    printf("%d days\n", day2 - day1 + year + 1);
    return 0;
}