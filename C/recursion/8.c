#include <stdio.h>

void sorted(int a[]){
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
             }
        }
        
    }
    printf("arry\n");
    
} 56
int main(){

    int a[6]={1,2,-9,0,-4,5};
    int temp=0,i;
    int n=6;
    sorted(a);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]); 
]
    }

    
}