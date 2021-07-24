#include <stdio.h>
#include <stdlib.h>
int zeroes(int a[],int size ) { 
    int minsum = a[0] + a[1];
    int sum = 0;
    int min_l = 0,min_r=1;
    for(int i = 0; i<7; i++){
        for(int j = i+1;j<7;j++){
            sum = a[i] + a[j];
            if(abs(minsum) > abs(sum)) {
                minsum=sum;
                min_l = i;
                min_r = j;
            }
        }
    }
    
    printf("(%d,%d) = %d",a[min_l],a[min_r],a[min_l]+a[min_r]); 
   
}
void main(){
    int a[7] = {1,-2,3,4,-5,6,-7};
    zeroes (a,7);

    
        
}
