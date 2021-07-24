#include <stdio.h>  

int  main() {  
    int num = 0;
   
checkCond:
    if (num < -20) {
        return -1;
    } 
    printf("%d\n",num);
    num=num-2;
    goto checkCond;
}