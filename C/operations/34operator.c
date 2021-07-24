#include<stdio.h>
int main()
{
int a, b, c;
printf("enter the number");
scanf("%d %d",&a,&b);
c=a<<=b;

printf("\nThe left shifted data is = %d ",c);
return 0;
}