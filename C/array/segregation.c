#include <stdio.h>
void main(){
    int a[5]={1,0,1,1,0};
    int zeroes[5];
    int ones[5];
    int zIndex=0;
    int oIndex=0;
    for(int i=0;i<5;i++){

       if(a[i]==0){
           zeroes[zIndex]=a[i];
           zIndex++;
        }
       else if(a[i]==1){
           ones[oIndex]=a[i];
           oIndex++;
        }
      else{
           continue;
        }
    }
    for(int i=0;i<oIndex;i++){
        printf("%d ",ones[i]);
    }
    printf("\n");
    for(int i=0;i<zIndex;i++){
        printf("%d ",zeroes[i]);
    }
}
