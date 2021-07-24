#include <stdio.h>
#include <string.h>
int fun(char s[],char sub[],int n,int i) {
    if(n == strlen(s)) {
        return 0;
    }
    if (i == strlen(sub)) {
        return  1 + fun(s,sub,n+1,0);
    }
    if( s[n] == sub[i] ) { 
        return fun (s,sub, n+1,i+1);
    }
    else {
       return fun (s,sub, n+1,0);
    }
}
void main() {
    int n=0,i=0;
    char s[100]="abc xx abc abc ab abc xx abc cxxabx abc x abc abc abbcc xabxcabbcabc ";
    char sub[10] = "abc";
    int c = fun (s,sub,n,i);
    printf("%d %d",strlen(s),strlen(sub));
    printf("abc occured %d\n",c);
}