#include<stdio.h>
int main(){
    
    int age;

printf("enter your age\n ");
scanf("%d",&age);


if(age>=18)
{
  
       printf("your eligible for vote",age);
    }
else
{

    printf("your not eligible for vote%d\n",age);
}



}