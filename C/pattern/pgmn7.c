#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,num;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        num=i;
        for(int j=1;j<=n;j++){
            printf("%d",num);
            num++;      
        }
        printf("\n");      
    }

}
   




    