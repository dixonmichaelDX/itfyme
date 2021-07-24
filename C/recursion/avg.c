#include <stdio.h>
int cnt=0;
int avg(int num) {
    if(num==0){
       return 0;
    } 
    int digit=num%10;
    cnt++;
    printf("cnt=%d\n",cnt);
    return digit+avg(num/10); 
}
int main() {
    int n;
    int avgs;
    printf("Enter the number\n");
    scanf("%d",&n);
    avgs=avg(n);
    printf("%d %d\n",avgs,cnt);
    printf("num of %f\n",(avgs*1.0)/cnt);   
}