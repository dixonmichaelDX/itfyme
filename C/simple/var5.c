#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
char ch='A';
printf("value of char is %c and value is %d \n",ch,sizeof(char));

bool b=1;
printf("value of ch %d is %d \n",b,sizeof(bool));

char str[]="aditya";
printf("value of ch %s is %d",str,sizeof(str));
}