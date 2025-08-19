#include<stdio.h>

int main()
{
    float F,C;
    printf("enter the value of celcius to convert it into farenhiet");
    scanf("%f",&C);
    F=(9/5.0*C)+ 32;
    printf("your answer in farenhiet is %f\n",F);
    return 0; 
}