//REVERSE A GIVEN NUMBER
#include<stdio.h>
void main()
{
 int a=0,b=0,s=0,d=0;
 printf("ENTER THE NUMBER \n");
 scanf("%d",&a);
 b=a;
 while(a!=0)
 {
     d=a%10;
     s=s*10+d;
     a=a/10;

 }
printf("THE REVERSE OF %d IS %d \n",b,s);
}