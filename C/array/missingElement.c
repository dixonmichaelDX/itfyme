#include <stdio.h>
void main(){
       int a[7]={1,2,3,4,5,6,8};
       int n=10;
       int num=a[0]+1;
       for(int i=1;i<7;i++){
           if(a[i]!=num){
               printf("%d",num);
               break;
              
           }
           num++;
           
       }

}
