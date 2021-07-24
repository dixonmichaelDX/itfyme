#include <stdio.h>    
int  main() {  
    int arr[700]; 
    int n ; 
    scanf("%d",&n) ; 
    printf("\nElements in array are:\n ");  
    for(int i=0; i<n; i++) {  
        arr[i]= i + 1 ;
        printf("%d\n", arr[i]) ;
    }  
  
    // printf("\nElements in array are: ");  
    // for(int i=0; i<n; i++) {  
    //     printf("%d  ", arr[i]); 
         
    // } 
    printf("\n");	
    return 0;
}




    