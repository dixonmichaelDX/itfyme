#include <stdio.h>
void main(){
       int a[7]={1,3,4,5,6,7,8};
       int n=10;
       for(int i=0;i<7;i++){
           int paire=a[i];
           for(int j=i+1;j<7;j++){
               if(paire+a[j]==n){
                   printf("(%d,%d)",paire,a[j]);
               }
           }
       }

}
