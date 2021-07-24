//minimum swap required array to sort
#include<stdio.h>
int findMax(int a[],int size) {
    int cnt =0;
    for(int i =0 ;i<size;i++){
        for (int j=size-1;j>i;j--){
            if (a[i]>a[j]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                cnt++;
            }   
        }
    }
    return cnt;
}
void main() {
    int a[11]={2,4,5,1,3};
    int cnt = findMax(a,5);
    printf("%d",cnt);

}