#include <stdio.h>
int checkInDuplicate(int n ,int size,int a[]){
    int exists=0;
    for(int i=0;i<size;i++){
        if(a[i]==n){
            exists=1;
        }
    }
    if(exists==1){
        return 1;
    }
    return 0;
}
void main(){
    int a[8]={4,3,6,3,5,1,3,3};
    int process[8];
    int ispresent;
    int dupIndex=0;
    int mElement=0,mFreq=0,cFreq;
    for(int i=0;i<8;i++){
        ispresent=checkInDuplicate(a[i],dupIndex,process);
        if(ispresent==0){
            cFreq=0;
            for(int j=0;j<8;j++){
                if(j!=i){
                    if(a[i]==a[j]){
                        cFreq++;

                    }
                }
            }
            if(cFreq>mFreq){
                mFreq=cFreq;
                mElement=a[i];
            }
        }
    }
    printf("majority element in array=%d\n",mElement);
}
