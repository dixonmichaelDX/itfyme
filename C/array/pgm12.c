#include<stdio.h>
void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    
}
int main(int argc, char *argv[]) {
    
    int a[10]={1,2,3,4,5,7,8,9,10,11};
    int odd[10];
    int even[10];
    int cnte=0;
    int cnto=0;
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            even[cnte]=a[i];
            cnte++;
        }
        else{
            odd[cnto]=a[i];
            cnto++;
        }
    } 

    printf("even numbers are\n");
    printArray(even,cnte);
    printf("odd numbers are\n");
    printArray(odd,cnto);
    
}
   




    