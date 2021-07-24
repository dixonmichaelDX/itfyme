//include library
#include<stdio.h>
int main(){
    printf("the value is 0 to 100 is\n");
    for(int i=1; i<=100; i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}