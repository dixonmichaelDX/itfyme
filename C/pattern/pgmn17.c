#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,num;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(num==n/2+1){
                printf("%d",num);
                 num--;
            }
            else if(i==j){
                printf("%d",num);
                num++;
            }
            
            else if(i+j==n+1){
               printf("%d",num);
            }
            else{
                printf(" ");
            } 
        }   
        printf("\n");      
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=2*i-1;j++){
            printf("%d",j);  
        }   
        printf("\n");      
    }
}



    
   




    