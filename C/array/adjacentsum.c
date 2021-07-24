#include <stdio.h>
void main(){
    int a[7] = {1,3,4,5,6,7,8};
    int evensum = 0;
    int oddsum = 0;
    for(int i=0;i<7;i++){
        if(i % 2 == 0){
            evensum += a[i];
        }
        else{
            oddsum += a[i];
        }
    }
    if(evensum > oddsum){
        printf("larger sum = %d",evensum);
    }
    else{
        printf("larger sum = %d",oddsum);
    }

}