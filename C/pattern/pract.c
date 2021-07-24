#include<stdio.h>
int main(int argc, char *argv[]) {
    int n;
    printf("enter number of time * should print\n ");
    scanf("%d",&n);
    int num =1;
    for(int i=5;i>=1;i--){
        int count = num*2 ;
        for(int j=0;j<i*2;j++){
            if (i+j == n &&  i <5 && count >= 0) {
                for(int k=count; k>0; k--) {
                   printf(" "); 
                   count--;
                }  
            } else {
                printf("*");
            }
           
        }
        num++;
        printf ("\n");
    }
}