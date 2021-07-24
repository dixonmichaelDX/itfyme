#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        n=n/2;
    }
    
        printf("%d ",n);

}