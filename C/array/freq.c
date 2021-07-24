#include <stdio.h>
struct FreqCard {
    int num;
    int freq;
};
void main(int argc, char *argv[]) {
    int numFreq=0;
    int arr[5]={1,2,3,4,4};
    struct FreqCard freq[5];
    
    for(int i=0;i<5;i++) {
        if(numFreq==0){ 
            freq[numFreq].num=arr[i];
            freq[numFreq].freq=1;
            numFreq++;
        }
        else{
            int isNew=0;
            for(int j=0;j<numFreq;j++) {
                if(arr[i]==freq[j].num){
                    freq[j].freq=freq[j].freq+1;
                    isNew=1;
                    break;
                }
            }
            if(isNew==0) {
                freq[numFreq].num=arr[i];
                freq[numFreq].freq=1;
                numFreq++;
            }

        }
    }
    for(int j=0;j<numFreq;j++) { 
        printf("%d %d\n",freq[j].num, freq[j].freq);       
    }
}




    
    
