#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;

printf("enter the age of 3 people");
scanf("%d %d %d",&a,&b,&c);

d=a>b>c;
if(c==0)
{
    printf("the greatest is %d",d)
}
else
{
    printf("the loweses is %d",b);
}


}