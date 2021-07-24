#include<stdio.h>
void main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,11};
    int k;
    printf("enter the kth element rotate the array\n");
    scanf("%d",&k);
    
    for(int i=k+1;i<10;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<=k;i++){
        printf("%d ",arr[i]);
    }
}