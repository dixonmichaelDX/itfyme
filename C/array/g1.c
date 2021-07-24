#include<stdio.h>
int findMax(int a[],int size) {
    for(int i =0 ;i<size-1;i++){
        if (a[i]>a[i+1]) {
            return a[i];
        }
    }
    return a[size-1];
}
void main() {
    int a[11]={8, 10, 20, 80, 100, 200, 400, 500, 3, 2, 1};
    int max = findMax(a,11);
    printf("%d",max);

}