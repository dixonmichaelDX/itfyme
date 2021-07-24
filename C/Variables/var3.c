/*#include<stdio.h>
int main(){
    short  shortnum=2;
    unsigned short  ushortnum=9;
    signed short sshortnum=-77;
    int intnum =2;
    unsigned int uintnum=4;
    signed int sintnum=-9;
    long longnum=99;
    unsigned long ulongnum=22;
    signed long slongnum=-44;
    float fnum=6.5;
    double dnum=999.0;
    //now lets print the address and the value ofeach variable
    printf("shortnum adress is %p \n",&shortnum);
    printf("unsigned short adress is %p \n",& ushortnum);
    printf("signed short  adress is %p \n",&sshortnum,);
    printf("====int");
    printf("int num adress is %p \n",&intnum);
    printf("sintnum adress is %p \n",&uintnum);
    printf("uintnum adress is %p \n",&sintnum);

    printf("==long");
    printf("long adress is %p ",&longnum,);
    printf("signed long num adress is %p\n",&slongnum);
    printf("usigned long num adress is %p \n",&ulongnum);

    printf(" float num adress is %p \n",&fnum);  
    printf("double num adress is %p ",&dnum);
}*/
#include <stdio.h>

int main(int argc, char *argv[]) {
    short sap = 0x7fff;
    short san = 0x8000;
    unsigned short sbmin = 0x0;
    unsigned short sbmax = 0xffff;

    printf("value is %d \n", sap);
    printf("value is %d \n", san);
    printf("value is %u  \n", sbmin);
    printf("value is %u  \n", sbmax);
    
    int ap = 0x7fffffff;
    int an = 0x80000000;
    unsigned int bmin = 0x0;
    unsigned int bmax = 0xffffffff;

    printf("value is %d \n", ap);
    printf("value is %d \n", an);
    printf("value is %u  \n", bmin);
    printf("value is %u  \n", bmax);
    
    long lap = 0x7fffffffffffffff;
    long lan = 0x8000000000000000;
    unsigned long lbmin = 0x0;
    unsigned long lbmax = 0xffffffffffffffff;

    printf("value is %ld \n", lap);
    printf("value is %ld \n", lan);
    printf("value is %lu  \n", lbmin);
    printf("value is %lu  \n", lbmax);
}

