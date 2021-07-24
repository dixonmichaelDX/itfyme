//include library
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);

    for( i=1; i<=n; i++){
         
        printf("%d x %d=%d \n",i,n,i*n);
    }
}