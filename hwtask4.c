//FACTORIAL OF A NUMBER
#include<stdio.h>
void main()
{
    int a=0,b=1,i=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d",&a);
    //calculation of FACTORIAL
    for(i=1;i<=a;i++)
    b=b*i;
    printf("THE FACTORIAL OF %d IS %d",a,b);
} 