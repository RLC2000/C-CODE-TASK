// A CHARATER IS VOWEL OR NOT
#include<stdio.h>
void main()
{
    char a;
    printf("ENTER YOUR CHARACTER \n");
    scanf("%c",&a);
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
    printf("THE GIVEN CHARACTER %c IS VOWEL\n",a);
    else
    printf("THE GIVEN CHARACTER %c IS CONSONENT \n",a);
    }