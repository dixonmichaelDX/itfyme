#include<stdio.h>
#include<string.h>
int main(){
    char str[]="aditya adity";
    int i=0;//i is index 
    int tcnt=0;//cnt is index of char
    int len=strlen(str);
    chary77 stoken[1204];
    char token=' ';
    for (int i = 0; i <strlen(str); i++)
    {
        if (str[i]==token)
        {
            stoken[tcnt]='\0';
            printf("%s\n",stoken);
            tcnt=0;
        }else
        {
            stoken[tcnt]=str[i];
            tcnt++;
        }   
    }
    printf("%s",stoken);
    return 0;   
}