#include <stdio.h>  
int  main() {  
    int arr[100]; 
    int n;

    scanf("%d",&n);
    for(int i=0; i<n; i++) {  
        arr[i]= i + 1 ;
    }  
  
    printf("\nElements in array in reverse order are: ");  
    for(int i=n-1; i>=0; i--) {  
        printf("%d  ", arr[i]); 
         
    } 
    printf("\n");	
    return 0;
}


    