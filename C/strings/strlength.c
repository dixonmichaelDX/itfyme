#include <stdio.h>
int strlens(char p[]){
    int len=0;
    while(p[len] !='\0'){
        len++;
    }
    return len;
}
void main() {
    
    char str[100]="abc";
    int len = strlens(str);
    printf("the length of the string is = %d",len);
}



   
   
  

