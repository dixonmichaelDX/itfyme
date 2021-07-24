#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("enter the 3 number\n");
    scanf("%d %d %d",&a,&b,&c);
   if(a>b && a>c){
   printf("a is the oldest");
   }
   else if(b>c && b>a)
   {
       printf("b is the oldest\n");

   }
 else if(a<b && a<c){
   printf("a is the youngest\n");
   }
   else if(b<c && b<a)
   {
       printf("b is the youngest\n");

   }

}