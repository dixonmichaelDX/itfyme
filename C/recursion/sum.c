#include <stdio.h>
int printRec(int num){
    if(num==0){
        return 0;
    }
    int digit=num%10;
    return digit+printRec(num/10);
}

int main() {
    int n,sum;
    printf("Enter the number \n");
    scanf("%d", &n);
    sum=printRec(n);
    printf("sum=%d",sum);   
}