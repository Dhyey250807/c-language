#include<stdio.h>

int main()

{
    float I,P,R,N;
    printf("enter the value of P ");
    scanf("%f",&P);

    printf("enter the value of R ");
    scanf("%f",&R);

    printf("enter the value of N ");
    scanf("%f",&N);

    I=P*R*N/100;

    printf("your interest I will be %f\n",I);

    return 0;

}