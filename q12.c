#include<stdio.h>
void main()
{
    int a,b;
    printf("enter value in kilograms to convert into grams");
    scanf("%d",&a);
    b=1000*a;
    printf("the answer in grams is %d\n",b);
}