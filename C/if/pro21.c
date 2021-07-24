#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the a b c\n");
    scanf("%d %d %d",&a,&b,&c);
    if( a==b &&  a==c)
    {
    printf("it is a Equilateral");
    }
    else if(a==b||a==c||b==c)
    {
    printf("it is a Isosceles ");
    }
    else if(a!=b && b!=c)
    {
    printf("Scalene");
    }
   
}