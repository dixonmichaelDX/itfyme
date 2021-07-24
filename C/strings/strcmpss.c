#include <stdio.h>
int strcmps(char str[], char dest[]) {
    int cmp=0;
    int i=0;
    while(str[i] !='\0' || dest[i] !='\0' ) {  
        if(str[i] != dest[i]){
            cmp=1;
            break;
        } 
        i++;
    }
    return cmp;   
}
void main() {
    char str[]="vyshnavi";
    char dest[]="vyshnavi";
    int i = 0;
    int cmp = 0;
    int c = strcmps(str,dest);
    if(c==0) {
        printf("strings are equal\n");
    }
    else {
        printf("strings are not equal\n");
    }   
}



   
   
  

