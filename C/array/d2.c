#include <stdio.h>
void main(){
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
             res[i][j]=0;
            for(int k=0;k<2;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
            printf("%d ",res[j][k]);
        }
        printf("\n");
    }

}
