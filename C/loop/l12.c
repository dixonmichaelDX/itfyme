#include<stdio.h>
int main(){
    int n,ld,fd;
    printf("enter the number");
    scanf("%d",&n);
    ld=n%10;
    while(n>=10){
        n=n/10;
    }
    fd=n;
    printf("first digit is %d and last digit is %d\n",fd,ld);
    printf("sum of first digit and last digit is %d ",fd+ld);
}