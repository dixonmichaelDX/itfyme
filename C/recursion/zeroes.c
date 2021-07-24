#include <stdio.h>
int zeroes(int num){
    if(num<10){
        return num==0;
    }
    int d=num%10;
    return (d==0)+zeroes(num/10);
}
int main() {
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    int c=zeroes(n);
    printf("%d",c);
}