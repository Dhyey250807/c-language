#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("enter the value of b ");
    scanf("%d",&b);
    printf("enter the value of c ");
    scanf("%d",&c);
    
    int sum=a+b+c;
    float avg;
    avg=sum/3.0;
    printf("sum = %d\n",sum);
    printf("avg = %f\n",avg);

    return 0;
}