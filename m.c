#include<stdio.h>
float add(float a,float b)
{
float ad ;
ad=a+b;
return ad;
}
float sub(float a,float b)
{
float ad;
ad=a-b;
return ad;
}
float mul(float a,float b)
{
    float m;
    m=a*b;
    return m;
}
void main ()
{
    float a,b;
   printf("ENTER YOUR NUMBER\n");
   scanf("%f%f",&a,&b);
   float ad=0,bad=0;
   float mu=0;
   ad=add(a,b);
   bad=sub(a,b);
   mu=mul(a,b);
printf("YOUR REQUIrED ANSWERS ARE %f %f %f ",ad,bad,mu);
}