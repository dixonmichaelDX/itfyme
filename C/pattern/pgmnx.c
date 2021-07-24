#include<stdio.h>
int main(int argc, char *argv[]) {
    int n;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    int num=(n/2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(((i==j ||j==n-i+1) && i<num)) {
                printf("%d",i);
            }
            else if((i>=num) && (i+j==n+1 || i==j)){
                printf("%d",num);
                
            }
            else{
                printf(" ");

            }
        }
        if(i>=num){
            num--;
        }
        printf("\n");
        
    }
}
  
  

   