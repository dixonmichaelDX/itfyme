#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,num;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    num=1;
    for(int i=1;i<=n;i++){
        num=1;
        for(int j=1;j<=n*2;j++){
            if(j<=i ){
                printf("%d",num);
                num++;
                
            }
            else if(j>n*2-i){
                //printf("  %d",j);
                num--;
               printf("%d",num);
               

            }
            else{
                printf(" ");
            }
                
        }   
        printf("\n");      
    }

}
   




    