#include<stdio.h>
int main(int argc, char *argv[]) {
    int n;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      
        for(int j=1;j<=n;j++){
            if((n%2==0 && (j==n/2 && i==n/2)) || (n%2!=0 &&j==(n/2)+1 &&i==(n/2)+1)){
                printf("0");
            }
            else if(j==(n/2)+1 &&i==(n/2)+1){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
        
    }
}
  
  

   