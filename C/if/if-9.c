#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;

printf("enter the age of 3 people");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
    printf("a is oldest");
}
else if(b>a && b>c)
{
    printf("b is oldest");
}
else if(c>a && c>b)
{
    printf("c is oldest");

}
else

if(a<b && a<c)
{
    printf("a is oldest");
}
else if(b<a && b<c)
{
    printf("b is oldest");
}
else if(c<a && c<b)
{
    printf("c is oldest");

}

}