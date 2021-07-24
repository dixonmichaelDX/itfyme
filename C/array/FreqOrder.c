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
    int a[]={1,1,2,3,1,3,6,8,2};
    int cFreq,cElement;
    int cFreqIndex=0;
    int cFreqs[8];
    int dup[8];
    int dupIndex=0;
    int ispresent;
    for(int i=0;i<9;i++){
        ispresent=checkInDuplicate(a[i],dupIndex,dup);
        if(ispresent==0){
            cFreq=0;
            for(int j=i+1;j<8;j++){
                if(a[i]==a[j]){
                    cFreq++;
                }
            }
            if(cFreqs[cFreqIndex]<cFreq){
                cFreqs[cFreqIndex+1]=cFreq;
            }
            else if(cFreqs[cFreqIndex]>cFreq){
                for(int i=0;i<cFreqIndex;i++){
                    if(cFreqs[i]<cFreq){
                        
                    }

                }
            }


        }
        


    }
    


}
