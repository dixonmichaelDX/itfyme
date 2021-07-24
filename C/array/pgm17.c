#include<stdio.h>
int main(int argc, char *argv[]) {
    
    int a[10]={1,2,3,4,5};
    int currentsize=5;
    int pos;
    printf("enter the position of the element to delete\n");
    scanf("%d",&pos);
    int temp,ddd;
    for(int i=0;i<currentsize;i++){
        if(i>=pos-1){
            printf("a+1=%d\n",a[i+1]);
            a[i]=a[i+1];
            //printf("num=%d",num);
        }
    }
    currentsize--;
    printf("array elements are\n");
    for(int i=0;i<currentsize;i++){
        printf("%d\n",a[i]);
    }
}