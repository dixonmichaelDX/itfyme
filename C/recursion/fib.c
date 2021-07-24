#include <stdio.h>
int fib(int n){
    printf("calling fib fun %d\n",n);
    if( n==0){
        return 0;
    }
    if( n==1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
int main() {
    int n,f;
    printf("Enter the number \n");
    scanf("%d", &n);
   // for(int i=0;i<n;i++){
        printf("%d\n",fib(n));
    //}
    
}