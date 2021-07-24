#include <stdio.h>
void main(int argc, char *argv[]) {
    
    int arr[10]={1,2,3,4,8,7,7,8,9,10};
    int duplicateArray[10];
    int duplicateNum=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    if(duplicateNum==0){
                        duplicateArray[duplicateNum]=arr[i];
                        duplicateNum++;
                    }
                    else{
                        int isPresent=0;
                        for(int k=0;k<duplicateNum;k++){
                            if(duplicateArray[k]==arr[i]){
                                isPresent=1;
                                break;
                            }
                        }
                        if(isPresent==0){
                            duplicateArray[duplicateNum]=arr[i];
                            duplicateNum++;
                        }

                    }
                }
            }
        }

        
    }
    printf("duplicate elements present are %d %d %d " ,duplicateNum);

}




    
    
