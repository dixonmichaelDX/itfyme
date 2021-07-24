#include <stdio.h>  

int  main() {  
    int num = 1 ;
checkCond:
    if (num > 20) {
        return -1;
    }  else  {
        printf("%d ",num++);
    }
    
    printf("\n");
    goto checkCond;
}