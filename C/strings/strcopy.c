#include <stdio.h>
void main() {
    char str[]="abc";
    char dest[100];
    int i=0;
    while(str[i] !='\0'){
        dest[i]=str[i];
        i++;    
    }
    printf("destination string %s",dest);
}



   
   
  

