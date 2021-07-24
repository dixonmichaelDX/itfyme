#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,temp;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    temp=1; 
    for(int i=1;i<=n;i++){  
           
            for(int j=1;j<=5;j++){
                printf(" %d",temp++);
            }
            printf("\n");
        }
        
          
    }
  
  

   