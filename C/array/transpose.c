#include <stdio.h>
void main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    //int b[2][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");

    }
}
