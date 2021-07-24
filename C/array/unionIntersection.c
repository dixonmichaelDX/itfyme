#include <stdio.h>
void main(){
    int a[]={1,2,3,4,5};
    int b[]={2,4,6,7,8};
    int j=0,i=0;
    int intersec[5];
    int intersIndex;
    int uindex=0;
    int unions[10];
    while(i<=4 || j<=4){
        if(j==5){
            unions[uindex++]=a[i];
            i++;
        }
        else if(i==5){
            unions[uindex++]=b[j];
            j++;
        }
        else if(a[i]< b[j]){
           unions[uindex]=a[i];
           uindex++;
           i++;
        }
        else if(a[i]>b[j]){
           unions[uindex]=b[j];
           uindex++;
           j++;
        }
        else {
           unions[uindex]=b[j];
           intersec[intersIndex]=b[j];
           uindex++;
           intersIndex++;
           j++;
           i++;
        }  
    }
    
    printf("i=%d j=%d\n",i,j);
    for(int i=0;i<uindex;i++){
        printf("%d\n",unions[i]);
    }
    printf("intersection elements are\n");
    for(int i=0;i<intersIndex;i++){
        printf("%d\n",intersec[i]);
    }

}
