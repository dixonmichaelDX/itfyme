#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,num;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        num=1;
        for(int j=1;j<=2*i-1;j++){
            if(j<i){
                printf("%d",num);
                num++;
            }
            else if(i==j){
                printf("%d",num);
            }
            else{
                num--;
                printf("%d",num);
            } 
            
        }   
        printf("\n");      
    }

}
   




    