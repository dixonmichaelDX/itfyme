#include<stdio.h>
int main(int argc, char *argv[]) {
    int n;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
           printf(" ");
        }
        for(int j=1;j<=n;j++){
          if(i==1 || i==n || j==1 || j==n){
                printf("*");
            }
          else{
                printf(" "); 
            }   
        }

         printf("\n");
        
    }
    }