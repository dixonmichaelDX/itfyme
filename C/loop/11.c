#include<stdio.h>
int main(){
    int n,fd,ld;
    printf("enter the number\n");
    scanf("%d",&n);
    ld=n%10;
    for (int i = 1; i < n; i++)
    {
        n=n/10;
        
    }
    fd=n;
    printf("%d %d",fd,ld);
    
}