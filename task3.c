//WRITE A C PROGRAM TO TAKE MARKS IN 3 SUBJECTS AND DISPLAY THEIR SUM AND AVERAGE.
#include<stdio.h>
void main()
{
int a=0,b=0,c=0,sum=0;
float avg=0;    
printf("ENTER THE MARKS IN THREE SUBJECTS : \n");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
avg=sum/3.0;
printf("THE SUM IS: %d\n",sum);
printf("THE AVERAGE IS: %f",avg);
}