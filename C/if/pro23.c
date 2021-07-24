#include<stdio.h>
int main()
{
    char ch;
    int d;


    printf("enter any value\n");
    scanf("%s",&ch);
   
    if(ch>='a' && ch<='z')
    {
    printf("it is a charater");
    
    }
    else if(ch>='0' && ch<='9')
    {
    printf("is a number");
   
    }
     else 
    {
    printf("is a special");
   
    }
   
}