#include<stdio.h>
int main(){
    
    int year;

printf("enter the year\n ");
scanf("%d",&year);

y=year%4;
if(year==0)
{
  
       printf("year is leapc%d\n",year);
    }
    else{
      printf("year is not a leap");
    }
      
if(year%100==0)
{
 
    printf("year is centure %d\n",year);
}
else
{
  printf("yeae is not centure");
}
}