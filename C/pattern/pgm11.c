#include<stdio.h>
int main(int argc, char *argv[]) {
    int n;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=i;k<=n-1;k++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            
              printf("*");
            }
        printf("\n");
        
    }
  

    for(int i=n-1;i>=1;i--){
        for(int k=i;k<=n-1;k++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            
              printf("*");
            }
        printf("\n");
        
    }
    
    
    }