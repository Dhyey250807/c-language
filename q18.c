#include<stdio.h>

int main()
{
    int A,P,L,B;
    printf("enter the value of L ");
    scanf("%d",&L);
    printf("enter the value of B ");
    scanf("%d",&B);

    A=L*B;
    P=2*(L+B);

    printf("the value of A is %d\n",A);
    printf("the value of P is %d\n",P);

    return 0;
}