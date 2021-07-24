#include<stdio.h>
int main(int argc, char *argv[]) {
    
    int a[2][10]={{1,2,3,4,5,6,7,8,9,10},{2,4,5,6,7,8,9,8,99,11}};   
    for(int i=0;i<2;i++){
        for(int j=0;j<10;j++){
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }

}