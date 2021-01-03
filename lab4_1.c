#include <stdio.h>
int main()
{
	int n,a=1,b=1,c,i=1;
	printf("请输入一个数：");
	scanf("%d",&n);

	if(n==1||n==2)
	{
		printf("1\n");
    }
	else{
	while(i<=n-2)
    {
		c=a+b;
        a=b;
        b=c;
        i++;
	}
    printf("%d\n",c);
	}
	return 0;
}