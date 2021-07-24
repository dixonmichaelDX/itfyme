/*#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(int argc,char *argv[])()
{
    char ch='A';
    printf("value is %c, size is %d\n",ch,sizeof(char));
    bool b=0;
    printf("value is %d, size is %d\n",b,sizeof(bool));

    char name[128]="pooja";
    printf("value is %s, size is %d\n",name,sizeof(name));

}*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(int argc, char *argv[]) {
    char a = 'C' ;
    char str[100] = "abc" ;
    bool b = 0 ; // 0 or 1

    printf("value is %c and size is %lu , addr is %p\n", a, sizeof(char), &a);
    printf("value is %s and size is %lu , addr is %p\n", str, sizeof(str), &str);
    printf("value is %u and size is %lu , addr is %p\n", b, sizeof(bool), &b);
}