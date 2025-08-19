#include<stdio.h>

int main()
{
    float C,F;
    printf("enter the value in farenheit to convert it into celcius");
    scanf("%f",&F);
    C=5/9.0*(F-32);
    printf("your answer in celcius is %f\n",C);
    return 0;
}