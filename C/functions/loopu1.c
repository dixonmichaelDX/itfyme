#include <stdio.h>  

int  main() {  
    int num = 1 ;
checkCond:
    if (num > 100) {
        return -1;
    }      
    printf("%d ",num);
    num=num+2;
    printf("\n");
    goto checkCond;
}