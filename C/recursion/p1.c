#include <stdio.h>
int printRec(int num){
    if(num==0){
        return 0;
    }
    return 2+printRec(num-1);
}
int main() {
    int n,prod;
    printf("Enter the number \n");
    scanf("%d", &n);
    prod=printRec(n);
    printf("prod=%d",prod);   
}