#include<stdio.h>
int main(){
    int n;
    int fd;
    int ld;
    printf("enter the number");
    scanf("%d",&n);
    ld=n%10;
    for (int i = 0; i < n; i++)
    {
        n=n/10;
    }
    fd=n;
    printf("%d is the first number %d is the last number\n",fd,ld);
    printf("%d + %d = %d \n",fd,ld,fd+ld);
}