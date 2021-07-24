#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,num;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        num=n;
        for(int j=1;j<=n;j++){
            if(i==1 || i==j || j>i){
                printf("%d",num);
            }
            else{
                printf("%d",num);
                num--;
            }
        }   
        printf("\n");      
    }

}
   




    