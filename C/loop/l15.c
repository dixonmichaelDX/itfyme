#include<stdio.h>
#include<math.h>

int main(int argc,char *argv[]){

int n, reverse=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
printf("Reversed Number: %d",reverse);    
return 0;  
}