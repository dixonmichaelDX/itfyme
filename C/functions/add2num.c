#include<stdio.h>
int add(int n1,int n2){
    return n1+n2;
}
int mul(int n1,int n2){
    return n1*n2;
}
float div(int n1,int n2){
    return n1*1.0/n2;
}
void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    
}
void main(int argc, char *argv[]) {
    int a=20,b=10,c;
    int arr[]={1,2,3,4,5,6};
    c=add(a,b);
    printf("add=%d\n",c);
    c=mul(a,b);
    printf("mul=%d\n",c);
    float d=div(a,b);
    printf("div=%f\n",d);
    printArray(arr,6);
    
    }
