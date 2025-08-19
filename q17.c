#include<stdio.h>

int main()

{
    int A,P,L;
    printf("enter the value of L ");
    scanf("%d",&L);
    A=L^2;
    P=4*L;
    printf("area is equal to %d\n",A);
    printf("perimeter is equal to %d\n",P);
    return 0;
}