#include <stdio.h>
void main(){
    int a[]={1,3,5,7,10,12,14};
    int pIndex;
    int num;
    int ispresent=0;
    printf("enter the pivoted index\n");
    scanf("%d",&pIndex);
    printf("enter the num\n");
    scanf("%d",&num);
    if(a[pIndex]>num){
        for(int i=0;i<pIndex;i++){
            if(a[i]==num){
                ispresent=1;
                printf("num %d is presen at %d index\n",i);
            }
        }
    }
    else {
        for(int i=pIndex;i<7;i++){
            if(a[i]==num){
                ispresent=1;
                printf("num %d is present at %d index \n",num,i);
            }
        }
    }
    if(ispresent==0){
        printf("num is not present\n");
    }

}
