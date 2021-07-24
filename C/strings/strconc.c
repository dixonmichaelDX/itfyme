#include <stdio.h>
void main() {
    char str[100]="abc";
    char dest[]="xyz";
    int i=0,j=0;
    while(str[i] != '\0'){
        i++;   
    }
    while(dest[j] != '\0'){
        str[i+j]=dest[j];
        j++;
        
    }
    printf("concatinated string %s",str);
}



   
   
  

