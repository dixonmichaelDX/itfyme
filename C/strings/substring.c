#include <stdio.h>
int substringss (char str[],char subs[]) {
    int strcnt = 0 ;
    int subcnt = 0 ;
    int index ;
    while(str[strcnt] != '\0' && subs[subcnt] !='\0' ) {
        if(subcnt == 0) {
            index = strcnt ;
        }
        if(subs[subcnt] == str[strcnt]) {
            subcnt++ ;
        }
        else {
           subcnt = 0;   
        }
       strcnt++;  
    } 
    if((str[strcnt] == '\0' && subcnt ==0 )  || subs[subcnt] !='\0') {
        return -1;
    }
    else {
        return index;
    }    
}
void main() {
    char str[] = "xyzabzabc";
    char subs[] = "za";
    int index =  substringss ( str , subs) ;
    if( index == -1 ) {
        printf("substring is not  present") ;
    }
    else {
        printf("substring present at %d",index) ;
    }    
}



   
   
  

