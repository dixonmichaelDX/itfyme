//include library
#include<stdio.h>
//print all natural number from 1 to n
int main(){
    int n,i,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("enter the natural number n to %d\n",n);
    for (i = 1; i <= n; i++)
    {
        sum=sum+i;
           
    }
            printf("%d",sum);

}