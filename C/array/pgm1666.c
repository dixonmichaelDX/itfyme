#include<stdio.h>
int fun(int a[])
{
    int i=0,flag=0;
    while(a[i]!=NULL){
        flag++;
        i++;
    }
    return flag;
}
int main(int argc, char *argv[]) {
    
    int a[10]={6,0,5,3};
    int len=fun(a);
    printf("%d",len);

    
    //int s=*(&a+1)-a;
    //printf("%d",s);

}