#include<stdio.h>
int main(int argc,char argv[]){
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    int last;
    int sum;
    
        last = n%10;
        printf("last last is %d\n",last);
        while(n>=10){
            n = n/10;
        }
            printf("first last is %d\n",n);
            sum = n+last;
            printf("sum of the lasts is %d",sum);

        
    

}