#include<stdio.h>
int main()
{
    int temp;
    printf("enter the temp\n");
    scanf("%d",&temp);
    if(temp<0){
    printf("frezing weather\n");
    }
    else if(temp>=10 && temp<=20){
    printf("cold");
    }

    else if(temp>=20 && temp<=30)
    {
      
    printf("normal");
    }
    
    else if(temp>=30 && temp<=40){
    printf("hot");
    }
    
    else if(temp>=40){
    printf("veryhot");
    }
   
}