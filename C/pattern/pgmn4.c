#include<stdio.h>
int main(int argc, char *argv[]) {
    int n;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      
        for(int j=1;j<=n;j++){
            if(j==1 || j==n|| i==1 || i==n){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
        
    }
}
  
  

   