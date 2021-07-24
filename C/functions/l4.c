#include <stdio.h>  

int  main() {  
    int num = 2 ;
    int sum = 0;
checkCond:
    if (num > 100 ) {
        printf("%d",sum);
        return -1;
    } 
    sum+=num; 
    num=num+2;
    goto checkCond;
}