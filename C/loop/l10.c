#include<stdio.h>
int main(){
    int m,c=0;
    printf("enter the numer \n");
    scanf("%d",&m);
    for(int i=0;m>0;i++){
        m=m/10;
        c++;
    
    }
    printf("digit count is =%d",c);
}