#include <stdio.h>  
#include <stdlib.h>
#include <limits.h>
  
int findMin(int a[],int n) {
    int min = INT_MAX;
    printf("INT_MAX is %d \n", min) ;
    for (int i = 0; i < n; i++) {
        printf("%d %d \n", a[i], min);
        if (a[i] < min) {
            min = a[i] ;
        }
    }
    printf("reurning %d\n", min);
    return min ;
}

int findMax(int a[],int n) {
    int max = INT_MIN;
    printf("INT_MIN is %d \n", max) ;
    for (int i = 0; i < n; i++) { 
        if (a[i] > max) {
            max = a[i] ;
        }
    }
    printf("reurning %d\n", max);
    return max ;
}
int  main() {  
    int arr[10]={5,6,7,8,2,1,10,11,21,44}; 
    for(int i=0; i<n; i++) {  
        arr[i]=rand();     
    }  
  
    for(int i=0; i<n; i++) {  
        printf("%d ", arr[i]);
    } 
    printf("\n");
    printf("minimum is %d and max is %d \n", findMin(arr, n),findMax(arr, n)) ;
    printf("\n");	
    return 0;
}