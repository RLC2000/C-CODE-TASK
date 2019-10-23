/*WRITE A C PROGRAM TO CHECK IF THE GIVEN STRING IS A PALINDROME OR NOT.

Hint -> The given string is a palindrome when it's reverse is the same as the original string.
 For example, the string "mom", "dad", "deed" etc. are all Palindromes.*/
 #include<stdio.h>
 #include<string.h>
 void main()
 {
 int k=0,j=0,i=0,l=0; 
 char na[20],nam[20];
 printf("ENTER YOUR STRING\n");
 gets(na);
 k=strlen(na);

 for(j=0;na[j]!='\0';j++)
 {
    k=k-1; //as srlen starts counting from 1 but base address of 1st char in string is 0.
     nam[k]=na[j]; 
     
 }   
 for(l=0;na[l]!='\0';l++)
 {
   if(nam[i]!=na[i])
    k=9;
    break;
 }
 if(k==9)
 printf("THE WORD IS NOT PALINDROME");
 else
 {
     printf("THE WORD IS PALINDROME");
 }
 }