#include <stdio.h>
int main()
{
    int weight=67;
    float height=1.78;
    float BMI=(weight/(height*height));
    printf("%.1f",BMI);
    return 0;
}