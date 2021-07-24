#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]) {

    int binNum[10];
    int index=0,n;
    printf("enter the num\n");
    scanf("%d",&n);
    while(n>0){
        binNum[index++] = n % 2;
        n = n/2;
    }
    while(index != 3) {
        binNum[index++] = 0;
    }

    for(int i=index-1;i>=0;i--){
        printf("%d",binNum[i]);
    }
}