#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,num;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        num=i+2;

        for(int j=1;j<=i*2;j++){
            if(i==0){
                printf("%d",i+1);
            }
            else if(j>=i){
                num--;
                printf("%d",num);
            }
            else{
                printf("*");
                num++;
                printf("%d",num);
            } 
            
        }   
        printf("\n");      
    }

}
   




    