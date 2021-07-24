#include <stdio.h>

int checkExists(int n, int a[], int size,int index) {
    int exists = 0; // indicates if item is there in the duplicate array

        // check with duplicate array
    for (int j = 0; j < size; j++) {
        if(j!=index){
            if (n == a[j]) {
                exists = 1;
                break;
            }          
        }
    }
    return exists ;
}

void printUniq(int a[], int size) {
    
    for (int j = 0; j < size; j++) {
        printf("notrepeat[%d] is %d  \n", j, a[j]);
    }
}

// Check how many numbers are duplicates in an array
 
int  main() {  
    // step 1 - declare and initialise array
    // data input
    int a[10] = {1,4,5,3,5,4,7,1,2,0} ;

    // out put data
    // store duplicate array in a seperate variable
    int notrepeat[10] ;

    // working variable
    int repeatCnt = 0;

    // for each element in an array a
    for (int i=0; i<10 ; i++) {
        // if in unique array dont add 
        if (checkExists(a[i], a,10,i)==0) { 
             // does not exists
           // printf("%d\n",a[i]);
            notrepeat[repeatCnt] = a[i];
            repeatCnt++;
        }
        // else ignore
    }
    // print unique number array
    printUniq(notrepeat, repeatCnt);

}
