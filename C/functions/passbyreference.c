#include<stdio.h>
int square(int* a);
int main(int argc, char *argv[]) {
    int a=10,b;
    b=square(&a);
    printf("in main method");
    printf("a=%d b=%d\n",a,b);
    printf("a address in %p\n",&a);
    }
int square(int* a){
    *a=(*a)* (*a);
    printf("in suare method\n");
    printf("a=%d \n",*a);
    printf("a address in %p\n",a);
    return *a;
}