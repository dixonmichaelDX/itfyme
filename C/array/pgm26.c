#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
    int nRow;
    int sum=0;
    printf("enter the number of rows for square matrix\n ");
    scanf("%d",&nRow);
    int a[nRow][nRow];
    for(int i=0;i<nRow;i++){
        for(int j=0;j<nRow;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<nRow;i++){
        for(int j=0;j<nRow;j++){
            if(i==j){
                sum+=a[i][j];
            }
            
        }
    }
    printf("sum of the diagonal is =%d",sum);
}