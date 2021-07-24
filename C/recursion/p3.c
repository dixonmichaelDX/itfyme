#include <stdio.h>
int printRec(int n){
    if(n<=0){
        return 0;
    }
    else if(n%2==0) {
        return 3;

    }else{
        return 2;
    }
    return printRec(n)+printRec(n-1);
}
int main() {
    int n,prod;
    printf("Enter the number \n");
    scanf("%d", &n);
    prod=printRec(n);
    printf("occurence=%d",prod);   
}