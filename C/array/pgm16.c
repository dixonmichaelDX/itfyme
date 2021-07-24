#include<stdio.h>
int main(int argc, char *argv[]) {
    
    int a[10]={1,2,3,4,5};
    int currentsize=5;
    int num;
    printf("enter the element to be insert in array\n");
    scanf("%d",&num);
    int temp;
    for(int i=0;i<=currentsize;i++){
        if(i>=currentsize/2){
            temp=a[i];
            //printf("temp=%d",temp);
            a[i]=num;
            //printf("num=%d",num);
            num=temp;
        }
    }
    currentsize++;
    printf("array elements are\n");
    for(int i=0;i<currentsize;i++){
        printf("%d\n",a[i]);
    }
}