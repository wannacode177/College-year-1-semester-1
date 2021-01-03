#include<stdio.h>
#include<stdbool.h>
int main()
{
    int sex;//1:female,0 :male
    int height;//>158
    int hardworking;//1:yes,0:no
    int weight;//<=58kg
    int cap;//>1000
    int islovely;//1:yes  0:no
    int age;//<=25

    printf("your sex,1 for female and 0 for male:");
    scanf("%d",&sex);

    printf("your height in cm:");
    scanf("%d",&height);
    
    printf("your weight in kg:");
    scanf("%d",&weight);
    
    printf("type if you  are pretty,1 for yes and 0 for no:");
    scanf("%d",&islovely);
    
    printf("are you hardworking,1 for yes and 0 for no:");
    scanf("%d",&hardworking);
    
    printf("your cap by YUAN:");
    scanf("%d",&cap);


    if (sex==1){
        if(cap>=1000){
            printf("let's meet\n");
            return 0;
        }
        if (age<=25&&age >=18&&weight<=58&&height>=158){
            printf("let's meet\n");
        }else if (cap>200000&&hardworking==1){
            printf("let's try\n");
        }
        else if(age>20&&weight <=58&&islovely==1){
            printf("let's try\n");
        }
    }else{ printf("sorry i love female\n");
    }
        
    return 0;
    }
