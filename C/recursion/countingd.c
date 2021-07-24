#include <stdio.h>
int countDigit(int num){
    if(num==0){
        return 0;
    }
    
    return 1+countDigit(num/10);
}

int main() {
    int n,count;
    printf("Enter the number \n");
    scanf("%d", &n);
    count=countDigit(n);
    printf("num of digit=%d",count);   
}