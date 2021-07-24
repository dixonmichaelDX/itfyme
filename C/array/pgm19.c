#include<stdio.h>
#include<stdlib.h>
int findSecondLargest(int a[],int size){
    int max,secondMax;
    max=INT_MIN;
    for(int i=0;i<size;i++){
        if(a[i]>max){
            secondMax=max;
            max=a[i];
        }

    }
    return secondMax;
}
int main(int argc, char *argv[]) {
    
    int a[9]={9,1,3,1,5,6,7,8,88};
    int sm;
    sm=findSecondLargest(a,9);
    printf("second maximum element =%d",sm);
    
}