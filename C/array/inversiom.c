#include <stdio.h>
void main(){
    int a[]={1,2,3,1,3,8,6,2};
    int inversioncount=0;
    
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(a[i]>a[j]){
                printf("%d %d\n",a[i],a[j]);
                inversioncount++;
            }
        }
        
    }
    printf("inversioncount=%d\n",inversioncount);

}
