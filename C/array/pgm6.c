#include <stdio.h>  
#include <stdlib.h>
#include <limits.h>

void copyArray(int src[], int dst[], int len) {
    for (int i=0;i<len;i++) {
        dst[i] = src[i];
    }
}

void printArray(int a[],  int len) {
    for (int i=0;i<len;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int  main() {  
    int arr[100]; 
    int cp[100] ;
    int n ; // read the number of items ... for the time being lets limit this number to 20
    int sum = 0;
    scanf("%d",&n) ; // accept n 

    // initializing
    for(int i=0; i<n; i++) {  
        arr[i]=rand();
        
    }  
    printArray(arr, n) ;
    copyArray(arr, cp, n) ;
    printArray(cp, n) ;
    printf("\n");	
    return 0;
}