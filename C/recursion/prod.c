#include <stdio.h>
int printRec(int num){
    if(num==0){
        return 1;
    }
    int digit=num%10;
    return digit*printRec(num/10);
}

int main() {
    int n,prod;
    printf("Enter the number \n");
    scanf("%d", &n);
    prod=printRec(n);
    printf("prod=%d",prod);   
}