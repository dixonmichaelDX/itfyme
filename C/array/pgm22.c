#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]) {
    int nRow,nCol;
    printf("enter the number of rows and columns for the matrix\n ");
    scanf("%d %d",&nRow,&nCol);
    int a[nRow][nRow];
    int b[nRow][nRow];
    for(int i=0;i<nRow;i++){
        for(int j=0;j<nRow;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<nRow;i++){
        for(int j=0;j<nRow;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for(int i=0;i<nRow;i++){
        int sum=0;
        for(int j=0;j<nRow;j++){
            sum=a[i][j]+b[i][j];
            printf("%d ",sum);   
        }
        printf("\n");
    }
   
}