#include<stdio.h>
struct FreqCard{
    int num;
    int freq;
};
void main(int argc, char *argv[]) {
    int n,numFreq=0;
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    struct FreqCard freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(numFreq==0){ 
            freq[numFreq].num=arr[i];
            //printf("numFreq[%d]=%d\n",numFreq,freq[numFreq].num);
            freq[numFreq].freq=1;
            numFreq++;
            //printf("freqnum[%d]=%d numfreq=%d\n",numFreq,freq[numFreq].num,numFreq);
        }
        else{
            int isNew=0;
            for(int j=0;j<numFreq;j++){
                //printf("item=%d freqNum=%d\n",arr[i],freq[numFreq].num);
                if(arr[i]==freq[j].num){
                    //printf("item=%d freqNum=%d\n",arr[i],freq[numFreq].num);
                    freq[j].freq=freq[j].freq+1;
                    isNew=1;
                    break;
                }
            }
            if(isNew==0){
                freq[numFreq].num=arr[i];
                freq[numFreq].freq=1;
                numFreq++;
            }

        }
    }
    printf("unique numbers are\n");
    for(int j=0;j<numFreq;j++){
        if(freq[j].freq==1){
            printf("%d\n",freq[j].num);
        }
    }
   
}

/*
#include <stdio.h>

int checkExists(int n, int a[], int size) {
    int exists = 0; // indicates if item is there in the duplicate array
    if (size > 0) {
        // check with duplicate array
        for (int j = 0; j < size; j++) {
            if (n == a[j]) {
                exists = 1 ;
                break ;
            }
        }
    }
    return exists ;
}

void printUniq(int a[], int size) {
    
    for (int j = 0; j < size; j++) {
        printf("uniq[%d] is %d  \n", j, a[j]);
    }
}

// Check how many numbers are duplicates in an array
#include <stdio.h>  
int  main() {  
    // step 1 - declare and initialise array
    // data input
    int a[10] = {1,4,5,3,5,4,7,1,2,0} ;

    // out put data
    // store duplicate array in a seperate variable
    int uniq[10] ;

    // working variable
    int uniqCnt = 0;

    // for each element in an array a
    for (int i=0; i<10 ; i++) {
        // if in unique array dont add 
        if (checkExists(a[i], uniq, uniqCnt)==0) {  // does not exists
            uniq[uniqCnt] = a[i];
            uniqCnt++;
        }
        // else ignore
    }
    // print unique number array
    printUniq(uniq, uniqCnt);

}
*/



    
    
