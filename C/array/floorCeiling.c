#include <stdio.h>
void main(){
    float b=11.5;
    int c=b;
    printf("%d\n",c);
    b=b-c;
    if(b>=0.5){
        b=c+1;
    }
    else{
        b=c;
    }
    printf("%f\n",b);
}
