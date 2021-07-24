#include <stdio.h>
void main(){
    int a[3]={1,3,4};
    int prod = 0;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
           
                printf("(%d,%d) = %d\n",a[i],a[j],a[i]+a[j]);
                prod = prod+(a[i]*a[j]);
        

            
            
           
        }
    }
    printf("sum=%d",prod);


}
