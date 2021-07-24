#include<stdio.h>
int main(int argc, char *argv[]) {
    int n=5,n2=7;
    int a[5]={1,2,3,4,5};
    int b[7]={6,7,8,9,10,11,12};
    int combine[12];
    int combineIndex; 
    for(int i=0;i<n;i++){
        combine[combineIndex]=a[i];
        combineIndex++;
    } 
    for(int i=0;i<n2;i++){
        combine[combineIndex]=b[i];
        combineIndex++;
    } 
    for(int i=0;i<combineIndex;i++){
        printf("%d\n",combine[i]);
    }
}
   




    