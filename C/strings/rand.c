#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>




void main() {
    int a[10];
    int cnt=0;
    srand(time(0));
    for(int i=0;i<10;i++) {
        int r = rand()%10;
        int found=0;
        printf("%d\n",r);
        for(int j=0;j<cnt;j++) {
            if(a[j]==r){
                found=1;
                break;
            }
        }
        if(found==0) {
            a[cnt]=r;
            cnt++;
            printf("%d\n",r);
        }
      
    }
    printf("cnt =%d",cnt);
}



   
   
  

