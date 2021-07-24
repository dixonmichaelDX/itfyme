#include <stdio.h>
void main(int argc, char *argv[]) {
    
    int arr[10]={1,2,3,4,8,7,7,8,9,10};
    int uniqueArray[10];
    int uniqueIndex=0;
    for(int i=0;i<10;i++){
        if(uniqueIndex==0){
            uniqueArray[uniqueIndex]=arr[i];
            uniqueIndex++;

        }
        else{
            int isPresent=0;
            for(int j=0;j<uniqueIndex;j++){
                if(uniqueArray[j]==arr[i]){
                    isPresent=1;
                    break;
                }
            }
            if(isPresent==0){
                uniqueArray[uniqueIndex]=arr[i];
                uniqueIndex++;


            }
        }

    }
    printf("unique elements are\n");
    for(int j=0;j<uniqueIndex;j++){
        printf("%d\n",uniqueArray[j]);
    }
}




    
    
