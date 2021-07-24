
//include library
#include<stdio.h>
#include<stdbool.h>
int main(int argc,char *argv[]){
    int a;
    float b;
    short c;
    long d;
    double e;
    char ch;
    char str[123];
    bool tf;
    signed long s;
    unsigned long u;
    a=atio(argv[1]);
    b=atio(argv[2]);
    d=atio(argv[3]);
    e=atio(argv[4]);
    ch=argv[5];
    str[123]=argv[6];
    tf=atio(argv[7]);
    s=atio(argv[8]);
    u=atio(argv[9]);
    
    printf("int num adress is %p value %d \n",&a,a);
    printf("float num adress is %p  value is %f\n",&b,b);
    printf(" short  adress is %p  value is %d\n",&d,d);
    
    printf("long num adress is %p value is %ld \n",&d,d);
    printf("double adress is %p value is %lf \n",&e,e);
    printf("char adress is %p value is %ch \n",&ch,ch);

    printf("string adress is %p value is %s",&str,str);
    printf("bool adress is %p value is %d\n",&tf,tf);
    printf("signed long num adress is %p value is %li\n",&s,s);
    printf("unsigned long num adress is %p value is %lu\n",&u,u);

}