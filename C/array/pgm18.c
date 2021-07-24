#include<stdio.h>
#include<stdlib.h>
int findSecondLargest(int a[],int size){
    int min,secondMin;
    min=INT_MAX;
    for(int i=0;i<size;i++){
        if(a[i]<min){
            secondMin=min;
            min=a[i];
        }

    }
    return secondMin;
}
int main(int argc, char *argv[]) {
    
    int a[9]={9,10,3,1,5,6,7,8,88};
    int sm;
    sm=findSecondLargest(a,9);
    printf("second minimum element =%d",sm);
    
}