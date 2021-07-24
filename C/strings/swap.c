#include <stdio.h>
void main(){
    char str1[100];
    char str2[100];
    int count1=0;
    int count2=0;
    printf("enter the string1\n");
    scanf("%s",str1);
    printf("enter the string2\n");
    scanf("%s",str2);
    int i=0;
    while(str1[i]!='\0'){
        count1++;
    }
    while(str2[i]!='\0'){
        count2++;
    }
    


}