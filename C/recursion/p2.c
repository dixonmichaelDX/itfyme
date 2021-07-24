#include <stdio.h>
int printRec(int num,int n){
    if(num==0){
        return 0;
    }
    int digit=num%10;
    
    return (digit==n)+printRec(num/10,n);
}
int main() {
    int n,prod;
    printf("Enter the number \n");
    scanf("%d", &n);
    prod=printRec(717,n);
    printf("occurence=%d",prod);   
}