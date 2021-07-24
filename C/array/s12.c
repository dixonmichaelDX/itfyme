#include <stdio.h>
void main(){
    char str[10];
    printf("enter the string\n");
    scanf("%s",str);
    int c=0;
    for(int i=0;str[i]!='\0';i++){
        
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                printf("ss %c \n",str[i]);
                c==1;   
            }
        }
        if(c==0){
            printf("%c ",str[i]);
            break;
        }
    }

}
