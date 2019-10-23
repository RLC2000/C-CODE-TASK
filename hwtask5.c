//BINARY TO DECIMAL CONVERSION
#include<stdio.h>
void main()
{
    int a=0,b,k,d,r=0;
    printf("ENTER YOUR BINARY NUMBER \n");
    scanf("%d",&a);
    b=a;k=1;
    while(a!=0)
    {  
        d=a%10;
        r=r+d*k;
        a=a/10;
        k=k*2;
    }
    printf("THE DECIMAL VALUE FOR %d IS %d",b,r);
}