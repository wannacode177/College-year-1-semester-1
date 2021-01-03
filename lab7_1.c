#include <stdio.h>
char stack1[100];
int top = 0; //全局变量，分别代表栈和栈顶数的位置start
void push(char a)
{
    stack1[top++] = a;
}

int pop()
{
    return stack1[--top];
}
int main()
{
    char ch, top1, top2; //分别用ch来读数，top1代表栈顶数的底下一层的数,top2代表栈顶数
    int i = 0, n = 0;
    goto mark;
start:
    while ((ch = getchar()) == '\n')
    {
        break;
    }
mark:
    printf("Enter an RPN expression:");
    while ((ch = getchar()) != '\n')
    {

        if (ch >= 48 && ch <= 57)
        {
            push(ch - '0');
            i++;
        }
        else
        {
            switch (ch)
            {
            case '+':
                push(pop() + pop());
                n++;
                break;
            case '-':
                top2 = pop();
                top1 = pop();
                push(top1 - top2);
                n++;
                break;
            case '*':
                push(pop() * pop());
                n++;
                break;
            case '/':
                top2 = pop();
                top1 = pop();
                if (top2 != 0)
                {
                    push(top1 / top2);
                    n++;
                    break;
                }
                else
                {
                    printf("出错，分母不能为0！\n");
                    goto start;
                }
            case ' ':
                break;
            case '=':
                if (n >= i)
                {
                    printf("Not enough operands in expression\n");
                    return 0;
                }
                else if (top > 100)
                {
                    printf("Expression is too complex!\n");
                    return 0;
                }

                else
                {
                    printf("Value of expression:%d\n", pop());
                    goto start;
                }
            default:
                printf("WRONG TYPE!\n");
                return 0;
            }
        }
    }
}
