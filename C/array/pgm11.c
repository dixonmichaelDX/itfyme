#include<stdio.h>
int main(int argc, char *argv[]) {
    int n=5,n2=7;
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10,11,12};
    int combine[n+n2]; 
    for(int i=0;i<n;i++){
        combine[i]=a[i];
    } 
    for(int i=0;i<n2;i++){
        combine[n+i]=b[i];
    } 
    for(int i=0;i<n+n2;i++){
        printf("%d\n",combine[i]);
    }
}
   




    