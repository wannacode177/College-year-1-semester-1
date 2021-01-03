#include<stdio.h>
int main()
{
    int month,day;

    printf("Enter date (month/day):");
    scanf("%d/%d",&month,&day);
if(day>1){  
    printf("Yesterday is 2020.%d.%d",month,day-1);
}

else if (day==1)
    {
        switch (month)
        {case 2:case 4:case 6: case 8:case 9:case 11:
        printf("Yesterday is 2020.%d.%d",month-1,31);break;
         case 5:case 7: case 10: case 12:
         printf("Yesterday is 2020.%d.%d",month-1,30);break;
         case 3:
         printf("Yesterday is 2020.%d.%d",month-1,29);break;
         case 1:
         printf("Yesterday is 2019.12.31");
        }
    }

         


    return 0;
}

