#include<stdio.h>
int square(int a);
int main(int argc, char *argv[]) {
    int a=10,b;
    b=square(a);
    printf("a=%d b=%d",a,b);
    printf("a address in %p\n",a);
    }
int square(int a){
    a=a*a;
    printf("a=%d",a);
    printf("a address in %p\n",a);
}