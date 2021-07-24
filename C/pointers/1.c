#include<stdio.h>
int main(){
    int a=5;
    int *p;
    p=&a;
    printf("address  of main %p:\n",main);
    printf("address  of a: %p\n",&a);
    printf("address  of p: %p\n",&p);
    printf("address  of p: %p\n",p);
    printf("address  of p: %p\n",p);
    printf("address  of p: %p\n",p);
    printf("address  of a: %d\n",a);
    printf("value of content pointed by p: %p\n",*p);

}