/*WRITE A C PROGRAM TO READ THE FIRST NAME AND THE LAST NAME OF THE USER IN 2 DIFFERENT VARIABLES, 
COMBINE THEM, AND DISPLAY THEIR FULL NAME USING A SINGLE STRING.*/
#include<stdio.h>
#include<string.h>
void main()
{
char fname[20],lname[20];
printf("ENTER YOUR FIRST NAME\n");
gets(fname);
printf("ENTER YOUR LAST NAME STARTING WITH SPACE\n");
gets(lname);
strcat(fname,lname);
printf("%s",fname);
}