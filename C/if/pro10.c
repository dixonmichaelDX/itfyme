#include<stdio.h>
int main(){
    float s;
    float c;
    float t;
  

printf("enter number of class\n");
scanf("%d",&c);

printf("enter total number of class attend\n");
scanf("%d",&t);
s=(t/c)*100;


   if (s>=75)  {
       printf("studen is eligible %f",s);
   }
   else
   {
       printf("studen is not eligible");
   }
 
}