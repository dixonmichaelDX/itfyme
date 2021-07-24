#include<stdio.h>
int main()
{
    char ch;
    int d;


    printf("enter any value\n");
    scanf("%s",&ch);
   
    if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A' || ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
    printf("it is a vowel");
    
    }
   else{
       printf("it is consonant");
   }
   
}