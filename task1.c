/*WRITE A C PROGRAM TO READ THE NAME, AGE AND PHONE NUMBER FROM THE USER, 
STORE THEM IN VARIABLES AND DISPLAY THEM BACK.*/
#include<stdio.h>
void main()
{
int a=0,b=0;
char name[20];
printf("ENTER THE REQUIRED NAME, AGE AND PHONE NUMBER :\n");
gets(name);
scanf("%d%d",&a,&b) ;
printf("THE  NAME IS: %s\n",name);
printf("THE  AGE IS : %d\n",a);
printf("THE PHONE NUMBER IS : %d\n");
}