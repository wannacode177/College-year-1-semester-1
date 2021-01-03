#include <stdio.h>
char stack1[100];
int top = 0, error = 0; //全局变量，分别用来代表栈,栈顶数的位置以及判断栈的上下溢
void stack_overflow()
{
    printf("Expression is too complex!\n");
    error = 1;
    return 0;
}

void stack_underflow()
{
    printf("Not enough operands in expression\n");
    error = 2;
    return 0;
}

void push(char a)
{
    if (error == 1)
    {
        stack_overflow();
    }
    else
        stack1[top++] = a;
}

int pop()
{
    if (error == 2)
    {
        stack_underflow();
    }
    else
        return stack1[--top];
}

int main()
{
    char ch, top1, top2; //分别用ch来读数，top1代表栈顶数底下一层的数,top2代表栈顶
    printf("Enter an RPN expression:");
    while ((ch = getchar()) >= 48 && (ch = getchar()) <= 57 || (ch = getchar()) == ' ' || (ch = getchar()) == '+' || (ch = getchar()) == '-' || (ch = getchar()) == '*' || (ch = getchar()) == '/' || (ch = getchar()) == '=' || (ch = getchar()) == '\n')
    {
        while ((ch = getchar()) != '\n')
        {
            if (ch >= 48 && ch <= 57)
            {
                push(ch - '0');
            }
            else
            {
                switch (ch)
                {
                case '+':
                    push(pop() + pop());
                    break;
                case '-':
                    top2 = pop();
                    top1 = pop();
                    push(top1 - top2);
                    break;
                case '*':
                    push(pop() * pop());
                    break;
                case '/':
                    top2 = pop();
                    top1 = pop();
                    if (top2 != 0)
                    {
                        push(top1 / top2);
                        break;
                    }
                    else
                    {
                        printf("出错，分母不能为0！\n");
                        return 0;
                    }
                case ' ':
                    break;
                case '=':
                    printf("Value of expression:%d\n", pop());
                    break;
                }
            }
        }
        return 0;
    }
    printf("wrong type!\n");
    return 0;
}
