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
    printf("Avg is %f \n", sum*1.0/n) ;
    printf("\n");	
    return 0;
}