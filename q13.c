#include<stdio.h>

int main()

{
    float bytes,KB,MB,GB ;
    printf("enter the value ");
    scanf("%f",&bytes);
    KB=bytes/1024;
    MB=KB/1024;
    GB=MB/1024;
    printf("%.2f = %.2f/1024\n",KB,bytes);
    printf("%.2f = %.2f/1024\n",MB,KB);
    printf("%.2f = %.2f/1024\n",GB,MB);
    
    return 0;
}