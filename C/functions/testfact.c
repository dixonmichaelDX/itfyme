#include<stdio.h>
#include "itmath.h"
void main(){
    int strong;
    strong=isStrong(145);
    if(strong==1){
        printf("given num is strong num");
    }
    else{
        printf("given num is not strong num");
    }
   
}