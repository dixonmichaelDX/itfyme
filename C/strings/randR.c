#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int cnt;
int getRandom(int a[],int b){
    int r = rand() % b;
    while((checkExist(a,r)) != 0) {
        getRandom(a,r);
    }
    return r;
}
int checkExist(int a[],int r) {
    int found = 0;
    for(int i=0; i<cnt ;i++) {
        if(a[i] == r) {
            //printf("****%d\n",r);
            found = 1;
            break;
        } 
    }
    if(found == 0) {
        a[cnt] = r;
        cnt++;
        return 0;
    }
    return 1;
}
void printArray(int a[], int n) {
    for (int i=0 ;i<n ;i++) {
        printf("%d\n",a[i]);   
    }
}
void main() {
    srand(time(0));
    int existArray[10];
    int r=10;
    cnt=0;
    for (int i=0 ;i<r+1 ;i++){
        int a=getRandom(existArray ,100);
    }
    printArray(existArray,10);  
}
   //row = rand() % r;
        /*if(dcnt == 0) {
            du[dcnt] = row;
            dcnt++;
        } else{ 
            int flag=0;
            time_t t;
            for(int k=0;k<dcnt;k++) {
                if(du[k] == row){
                    flag=1;
                    row = rand() % r;
                    break;
                    //printf("...%d",row);
                }

            }
            if(flag==0) {
                du[dcnt] = row;
                dcnt++;
            }*/


   
   
  

