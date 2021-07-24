#include<stdio.h>
void main(){
    int a[4][4]={{1,1,0,0},{0,0,0,0},{1,1,0,0},{1,1,1,0}};
    for(int i=0;i<4;i++){
        int flag=0;
        for(int j=0;j<4;j++) {
            if (i!=j) {
                if(a[i][j] != 0 || a[j][i] !=1) {
                    flag=1;
                    break;

                }
            }
        }
        if(flag == 0){
            printf("row= %d",i);
        }
    }
    
}