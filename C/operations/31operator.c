#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    c=a+(~b+1);
    printf("the value %d",c);

}