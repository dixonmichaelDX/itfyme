#include<stdio.h>
int main(int argc,char argv[]){
    int n,digit,count=0;
    printf("enter the number \n");
    scanf("%d",&n);
    while(n>0){
         n = n/10;
        count++;
    }
    printf("%d",count);  
     
}