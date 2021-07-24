#include <stdio.h>
void main(){
    int a[5]={1,20,7,8,6};
    int less=0;
    for(int i=0;i<5;i++){
        less=0;
        for(int j=i+1;j<5;j++){
            if(a[i]<a[j]){
               less=1;  
               break;
            }
        }
        if(less==0){
            printf("%d\n",a[i]);
        }
    }
}
