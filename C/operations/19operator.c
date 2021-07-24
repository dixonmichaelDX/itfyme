#include<stdio.h>
int main()
{
 int l;
 int feet;
 int meter;
 printf("enter the length\n");
 scanf("%d",&l);
 meter=l*100;  
 printf("the length of the meeter is %d \n",meter);
 feet=meter*3.2808;
 printf("the value of meter in feet is%d",feet);
}