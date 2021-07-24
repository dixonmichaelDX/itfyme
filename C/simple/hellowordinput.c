/* simple hello word program 
by itfyme*/
//include library
#include<stdio.h>
int main(int argc, char *argv[])
{
    char name[128];
    //print hello word
    printf("enter the your name \n");
    scanf("%s",name);
    printf("Hello %s. welcome to the program word \n",name);
}
