#include <stdio.h>
void main(){
    int maxdiff=0;
    int cdiff=0;
    int a[]={5,6,1,5,2,8,9,-10};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(a[i]<a[j]){
                cdiff=a[j]-a[i];
                if(maxdiff<cdiff){
                    maxdiff=cdiff;
                }
            }
        }
    }
    printf("max difference =%d",maxdiff);
    
    


}
