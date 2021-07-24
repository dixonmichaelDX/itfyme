#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,count;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf(" %d",count);
            count++;      
        }
        printf("\n");      
    }

}
   




    