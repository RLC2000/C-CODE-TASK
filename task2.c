/*WRITE A C PROGRAM TO TAKE THE TEMPERATURE IN CELSIUS AND 
CONVERT IT TO FAHRENHEIT AND DISPLAY IT BACK.*/
#include<stdio.h>
void main()
{
float cel=0,fah=0; 
printf("ENTER THE TEMPERATURE IN CELCIUS \n");
scanf("%f",&cel);
fah=((9*cel)/5.0)+32;
printf("THE TEMPERATURE IN FAHRENHEIT: %f \n",fah);
}
