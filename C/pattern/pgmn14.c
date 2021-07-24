#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,num;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("%d",j);
        }   
        printf("\n");      
    }

}
   




    