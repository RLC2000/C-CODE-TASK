/* WRITE A C PROGRAM TO CHECK IF THE GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT.

Hint -> An Armstrong number of 'n' digits is the sum of all 
the individual digits to their powers of 'n'.

For example, 371 is an Armstrong number because

371 = 3**3 + 7**3 + 1**3 (where ** represents "to the power of")

, which is the sum of individual numbers to the power 'n'! Here, 'n'is 3, since the number is 371!*/
#include<stdio.h>
void main()
{
int n=0,r=0,d=0;
printf("ENTER YOUR NUMBER\n");
scanf("%d",&n);
int k=n;
while(n!=0)
{
    d=n%10;
    r=r+(d*d*d);
    n=n/10;
}
if(k==r)
printf("THE NUMBER : %d IS ARMSTRONG",r);
else
printf("THE NUMBER : %d IS NOT ARMSTRONG",k);
}