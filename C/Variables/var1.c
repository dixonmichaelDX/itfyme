/* #include<stdio.h>
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
    printf("shortnum adress is %p and value is %d,%d\n",&shortnum,shortnum,sizeof(short));
    printf("unsigned short adress is %p and value is %hu,%d\n",& ushortnum, ushortnum,sizeof(unsigned short));
    printf("signed short  adress is %p and value is %hi,%d\n",&sshortnum,sshortnum,sizeof(signed short));
    printf("====int");
    printf("int num adress is %p and value is %d,%d\n",&intnum,intnum,sizeof(int));
    printf("sintnum adress is %p and value is %u,%d\n",&uintnum,uintnum,sizeof(unsigned int));
    printf("uintnum adress is %p and value is %lu,%d\n",&sintnum,sintnum,sizeof(signed int));

    printf("==long");
    printf("long adress is %p and value is %ld,%d\n",&longnum,longnum,sizeof(long));
    printf("signed long num adress is %p and value is %li,%d\n",&slongnum,slongnum,sizeof(signed long));
    printf("usigned long num adress is %p and value is %lu,%d\n",&ulongnum,ulongnum,sizeof(unsigned long));

    printf(" float num adress is %p and value is %f,%d\n",&fnum,fnum,sizeof(float));  
    printf("double num adress is %p and value is %lf,%d\n",&dnum,dnum,sizeof(double));

    


}
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
    short sa = 1900;
    unsigned short sb = 3410 ;
    signed short sc = -14340;
    printf("value is %hd and size is %lu \n", sa, sizeof(short));
    printf("value is %hd and size is %lu \n", sb, sizeof(unsigned short));
    printf("value is %hd and size is %lu \n", sc, sizeof(signed short));
    long la = 1032323;
    unsigned long lb = 12330 ;
    signed long lc = -102323;
    printf("value is %ld and size is %lu \n", la, sizeof(long));
    printf("value is %ld and size is %lu \n", lb, sizeof(unsigned long));
    printf("value is %ld and size is %lu \n", lc, sizeof(signed long));
    int a = 1023;
    unsigned int b = 1310 ;
    signed int c = -134540;
    printf("value is %d and size is %lu \n", a, sizeof(int));
    printf("value is %d and size is %lu \n", b, sizeof(unsigned int));
    printf("value is %d and size is %lu \n", c, sizeof(signed int));
    double d = 1032.34032232323 ;
    float f = -1023.232342342323234234234;
    printf("value is %lf and size is %lu \n", d, sizeof(double));
    printf("value is %f and size is %lu \n", f, sizeof(float));
    
}

