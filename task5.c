/* WRITE A C PROGRAM TO FIND THE REVERSE OF A GIVEN NUMBER.

Sample Input : 12345

Sample Output : 54321.*/
#include<stdio.h>
void main()
{
int n=0,r=0,d=0;
printf("ENTER YOUR NUMBER\n");
scanf("%d",&n);
while(n!=0)
{
    d=n%10;
    r=r*10+d;
    n=n/10;
}
printf("THE REVERSE IS : %d",r);
}