#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,temp,t;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    temp=n; 
    for(int i=5;i>=1;i--){  
            //temp=n; 
        temp=temp-1;
            for(int j=1;j<=5;j++){
                if(j==1 ||i==n){
                    printf("%d",n);
                }
                else{
                   printf("%d",temp); 
                }
        
            }
        printf("\n");
        
          
    }
}
  
  

   