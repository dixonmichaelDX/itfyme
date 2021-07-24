#include<stdio.h>
 int fab(int n){
     printf("fib is %d \n \t",n);
         if (n==0)
         {
             return 0;
         }
         if (n==1)
         {
             return 1;
         }else 
         return fab(n-1) + fab(n-2);
     }
     


int main(){
int n=5;
int c=fab(n);
printf("%d",c);
}