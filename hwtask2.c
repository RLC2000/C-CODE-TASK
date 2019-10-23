//SWAP TWO NUMBER WITHOUT A THIRD NUMBER
#include<stdio.h>
void main()
{
    int a,b;
    printf("ENTER THE 2 NO. \n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("THE SWAPPED NO. IS \n %d \n %d",a,b);
    
}