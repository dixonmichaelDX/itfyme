#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter the number of a b c\n");
    scanf("%d %d",&a,&b);
    c=a>>=b;
    printf("the value of right sise is %d",c);
}




