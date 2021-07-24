//include library
#include<stdio.h>
int main(){
    int a;
    printf("enter the number\n");
    scanf("%d",&a);

    for(int i=1; i<=10; i++){
    printf("%d x %d \n",a,a*i);
    }
}