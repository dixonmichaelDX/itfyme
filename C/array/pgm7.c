#include <stdio.h>  
#include <stdlib.h>
#include <limits.h>
int  main() { 

    int arr[10];
    int num; 
    int isPresent=0;
    printf("enter the number\n");
    sanf("%d",&num);
    for(int i=0; i<10; i++) {  
        arr[i]=rand();    
    } 
    for(int i=0; i<10; i++) {  
        if(arr[i]==num){
            isPresent=1;
            break;
        }   
    } 
    if(isPresent==1){
        printf("number %d is present\n",num);
    }
    else{
        printf("number %d is not present\n",num);
    }  
    return 0;
}