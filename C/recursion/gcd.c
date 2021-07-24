#include <stdio.h>
int gcd(int a,int b,int min){

    if(min==2){
        return 1 ;   
    }
    if(a%min==0 && b%min==0){
        return min;
    }
    return gcd(a,b,min-1);
}
int main() {
    int a,b,min;
    printf("Enter the number \n");
    scanf("%d %d", &a,&b);
    if(a>b){
        min=b;
    }
    else{
        min=a;
    } 
    int l=gcd(a,b,min);
    printf("%d",l);
}