#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
void main(int argc, char *argv[]) {
    int n=9;
    printf("factorial of %d =%d",n,fact(n));
    
    }
