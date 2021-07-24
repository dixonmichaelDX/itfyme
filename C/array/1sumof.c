#include<stdio.h>
int main(){
    int a[2]={4,5};
    int sum=0;
    for (int i = 0; i < 2; i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    
}