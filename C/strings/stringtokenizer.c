#include <stdio.h>
void stringTokenizers(char str[],char token){
    int i=0,tcnt=0;
    char stoken[1024];

    while(str[i] != '\0') {
        if(str[i]==token){
            stoken[tcnt]='\0';
            printf("%s\n",stoken);
            tcnt=0;
        } else {
            stoken[tcnt]=str[i];
            tcnt++;
        }
        i++;
    }
    printf("%s\n",stoken);

}
void main() {
    char str[]="this is india";
    char token=' ';
    stringTokenizers(str,token);   
}



   
   
  

