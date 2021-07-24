#include<stdio.h>
#include<math.h>

int main(int argc,char *argv[]){
    int base;
    int exponent;
    long long power = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }
    printf("%d ^ %d = %lld", base, exponent, power);

    return 0;
}