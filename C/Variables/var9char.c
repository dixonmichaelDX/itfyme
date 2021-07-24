/*#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(int argc,char *argv[])
{
    char ch;
    scanf("%c",&ch);
    printf("value is %c, size is %d\n",ch,sizeof(char));
    bool b;
    scanf("%d",&b);
    printf("value is %d, size is %d\n",b,sizeof(bool));
    char name[128];
    scanf("%s",&name);
    printf("value is %s, size is %d\n",name,sizeof(name));

}*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(int argc, char *argv[]) {
    char a  ;
    char str[100]  ;
    int b ;
    printf("enter one character, string, either 0 or 1 seperated by spaces \n");
    scanf("%c %s %d", &a, str, &b);
    printf("value is %c \n", a);
    printf("value is %s \n", str);
    printf("value is %d \n", b);
}

