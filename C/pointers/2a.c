#include<stdio.h>
int sum(int *a,int *b){
    *a=*a+*a;
    *b=*b+*b    ;
    printf("a is %d b is %d",&a,&b);
    return *a+*b;
}
int main(){
    int a=10;
    int b=1;
    int sum
}