#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int sum;

    printf("enter the a b c\n");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum ==180)
    {
    printf("it is a triangle");
    
    }
    else
    {
    printf("is not a trinagle");
   
    }
   
}