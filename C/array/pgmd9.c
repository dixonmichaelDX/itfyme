#include<stdio.h>
struct FreqCard{
    int num;
    int freq;
};
void main(int argc, char *argv[]) {
    int numFreq=0;
    int arr[10]={1,2,3,4,5,6,7,7,9,9};
    struct FreqCard freq[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
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

    for(int j=0;j<numFreq;j++){
        printf("%d %d\n",freq[j].num, freq[j].freq);
    }
   
}

/* 
    Array Problems
    By ITfyMe.com 
*/

/*#include <stdio.h>

struct dupFreq {
    int num ;
    int freq ;
} ;

int checkDuplicate(int n, struct dupFreq dup[], int size) {
    printf("checking duplicate for %d with size %d\n", n, size);
    int exists = 0; // indicates if item is there in the duplicate array
    if (size > 0) {
        // check with duplicate array
        for (int j = 0; j < size; j++) {
            if (n == dup[j].num) {
                dup[j].freq++;
                exists = 1 ;
                break ;
            }
        }
    }
    return exists ;
}

void printDup(struct dupFreq a[], int size) {
    
    for (int j = 0; j < size; j++) {
        printf("dup[%d] is %d %d \n", j, a[j].num , a[j].freq);
    }
}

// Check how many numbers are duplicates in an array
#include <stdio.h>  
int  main() {  
    // step 1 - declare and initialise array
    // data input
    int a[10] = {1,4,5,3,5,4,7,1,2,0} ;

    // data output 
    // number of duplicates
    int numDuplicate = 0;

    // working variable 
    // store duplicate array in a seperate variable
    struct dupFreq dup[10] ;

    // for each element in an array a
    for (int i=0; i<10 ; i++) {
        // printDup(dup,numDuplicate);
        // check if this element is there in the duplicate array
        if (checkDuplicate(a[i],dup, numDuplicate) == 1)
            continue;         
        for (int j = 0; j < 10; j++) {
            if (i == j) // dont compare the same element
                continue ;
            else {
                if (a[i] == a[j]) {
                    struct dupFreq f ;
                    f.num = a[i] ;
                    f.freq = 1 ;
                    dup[numDuplicate] = f;
                    numDuplicate++;
                }
            }
        }
    }
    printDup(dup, numDuplicate);
    printf("number of dupicate items are %d \n", numDuplicate);
}
*/




    
    
