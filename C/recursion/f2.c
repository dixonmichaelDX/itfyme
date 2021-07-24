#include<stdio.h>
int fact(int n){
    if (n==1)
    {
        return 1;
    }
    return n*fact(n-1);
    
}
int main(){
    int a=4;
    fact(a);
    printf("%d",fact(a));
}z