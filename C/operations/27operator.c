#include<stdio.h>
int main()
{
    int x , y ;
printf("enter the numberof x and y\n");
scanf("%d %d",&x,&y);

 
    x = x + y; 
    y = x - y; 
    x = x - y; 
 
    printf("After Swapping: x = %d, y = %d", x, y);
 

}