#include <stdio.h>
int main()
{
  int i = 0;
  char ch;
  printf("输入一句英文的句子（包含4个以上的单词）：");
  while ((ch = getchar()) != '\n')
  {
    if (ch == 'e' || ch == 'E')
    {
      i++;
    }
  }

  printf("输入的句子中英文字母e or E的个数为:%d\n", i);
  return 0;
}