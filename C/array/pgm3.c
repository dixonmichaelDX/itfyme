#include <stdio.h>  
  
int  main() {  
    int arr[100]; 
    int n; 
    int sum = 0;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {  
        arr[i]= i + 1;
    }  
  
    for(int i=0; i<n; i++) {  
        sum = sum + arr[i];
    } 
    printf("sum is %d \n", sum) ;
    printf("\n");	
    return 0;
}