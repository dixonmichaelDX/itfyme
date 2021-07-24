#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,temp;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){  
            temp=i;
            for(int j=1;j<5;j++){
                printf("%d",temp++);
            }
            printf("\n");
        }
        
          
    }
  
  

   