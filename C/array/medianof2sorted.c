#include <stdio.h>
void main(){
    int a[3]={1,5,6};
    int b[3]={2,7,8};
    int i=0;
    int j=0;
    int res[6];
    for(int k=0;k<6;k++){
        if(i==3){
            res[k]=b[j];
            j++;
        }
        else if(j==3){
            res[k]=a[i];
            i++;
        }
        else if(a[i]<b[j]){
            res[k]=a[i];
            i++;
        }
        else{
            res[k]=b[j];
            j++;

        }
    }
    int k=0;
    for(k=0;k<6;k++){
        printf("%d ",res[k]);
    }
    printf("k=%d\n",k);
    if(k%2!=0){
        
        printf("\nmedian=%d",res[k/2]);
    }
    else{
       int median=res[k/2-1]+res[k/2]/2;
       printf("\nmedian=%d",median);
    }

}
