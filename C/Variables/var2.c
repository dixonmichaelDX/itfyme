/*#include<stdio.h>
int main(){
    
    short  a;
    unsigned short  b;
    signed short c;
    a=5;
    b=6;
    c=-7;
    
    printf("value is %d, size is %d\n",a,sizeof(short));
    printf(" value is %hu,size is %d\n", b,sizeof(unsigned short));
    printf(" value is %hi, size is %d\n",c,sizeof(signed short));
    int ia;
    unsigned int ic;
    signed int ib ;
    ia=9;
    ib=-8;
    ic=45;
    printf("value is %d, size is %d\n",ia,sizeof(int));
    printf("value is %u, size is %d\n",ic,sizeof(unsigned int));
    printf(" value is %lu, size is %d\n",ib,sizeof(signed int));

    long la;
    unsigned long lb;
    signed long lc;
    printf(" value is %ld, size is %d\n",la,sizeof(long));
    //printf(" value is %li, size is %d\n"lc,sizeof(signed long));
    printf("value is %lu, size is %d\n",b,sizeof(unsigned long));

    float fa;
    fa=9.8;
    printf("value is %f, size is %d\n",fa,sizeof(float));  

    double da;
    da=66.9;
    printf(" value is %lf, size is %d\n",da,sizeof(double));

}
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
    short sa ;
    unsigned short sb ;
    signed short sc ;
    sa = 12;
    sb = 192;
    sc = -23;
    printf("value is %hd and size is %lu, %p\n", sa, sizeof(short),&sa);
    printf("value is %hd and size is %lu, %p \n", sb, sizeof(unsigned short),&sb);
    printf("value is %hd and size is %lu, %p \n", sc, sizeof(signed short),&sc);
    long la ;
    unsigned long lb  ;
    signed long lc ;
    la = 232312;
    lb = 324192;
    lc = -2323;
    printf("value is %ld and size is %lu, %p \n", la, sizeof(long),&la);
    printf("value is %ld and size is %lu, %p \n", lb, sizeof(unsigned long),&lb);
    printf("value is %ld and size is %lu, %p \n", lc, sizeof(signed long),&lc);
    int a ;
    unsigned int b  ;
    signed int c ;
    a = 2312;
    b = 193232;
    c = -22123;
    printf("value is %d and size is %lu, %p \n", a, sizeof(int),&a);
    printf("value is %d and size is %lu, %p \n", b, sizeof(unsigned int),&b);
    printf("value is %d and size is %lu, %p \n", c, sizeof(signed int), &c);
    double d;
    float f ;
    d = 2.393;
    f = 28.123;
    /*union {
        float f ;
        __uint32_t u ;
    } f2u = {.f = f} ;*/

    printf("value is %lf   and size is %lu, %p \n", d,  sizeof(double), &d);
    printf("value is %f, %x and size is %lu, %p \n", f, sizeof(float), &f);
    
}

