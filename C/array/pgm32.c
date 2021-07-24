#include<stdio.h>
void main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,11};
    int temp=arr[0];
    arr[0]=arr[9];
    arr[9]=temp;
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
}