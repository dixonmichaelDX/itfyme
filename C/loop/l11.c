#include<stdio.h>
int main(){
    int n,ld,fd;
    printf("enter the number");
    scanf("%d",&n);
    ld=n%10;
     printf("%d",ld);
     for (int i = 0; n >= 10; i++)
     {
         n=n/10;
 
     }
     fd=n;
 
     printf("FIRST digit is %d, last digit is %d",fd,ld);
}




















// for(n=1;n>=10;n++)
//     {
//         if(n/10){

//         } 
      
//     }
//       fd=n;
       
