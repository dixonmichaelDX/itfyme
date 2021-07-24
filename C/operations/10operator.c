#include<stdio.h>
int main()
{
int a = 21;
   int c=12;

   c =  a;
   printf(" Value of c = %d\n", c );

   c +=  a;
   printf("Value of c = %d\n", c );

   c -=  a;
   printf("Value of c = %d\n", c );

   c *=  a;
   printf("Value of c c = %d\n", c );

   c /=  a;
   printf("Value of c= %d\n", c );

   c  = 200;
   c %=  a;
   printf("Value of c= %d\n", c );

 


}