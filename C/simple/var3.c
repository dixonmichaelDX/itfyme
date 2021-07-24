#include<stdio.h>
int main()
{

    short a;
    unsigned short b;
    signed short c;

a=10;
b=20;
c=30;

    printf("value of i1 is %hi and address is %p\n",&a,a,sizeof(unsigned int));
    printf("value of i is %hi and address is %p\n",&b,b,sizeof(int));
    printf("value of i3 is %hi and address is %p\n",&c,c,sizeof(signed int));

       int i;
unsigned int i1;
 signed int i3;
    i=1;
    i1=12;
    i3=21;
    
 
    printf("value of i is %d and address is %p\n",&i,i,sizeof(int));
    
    printf("value of i1 is %d and address is %p\n",&i1,i1,sizeof(unsigned int));
   
    printf("value of i3 is %d and address is %p\n",&i1,i1,sizeof(signed int));


    
    long l;
       unsigned long il;
          signed long l3;
l=1;
il=21;
l3=123;


    printf("value of l is %lu and address is %p \n",&l,l,sizeof(long));

    printf("value of l1 is %lu and address is %p \n",&il,il,sizeof(unsigned long));
 
    printf("value of l3 is %lu and address is %p\n",&il,il,sizeof(signed long));


float f;
    printf("value of f is %f and address is %p\n",&f,f,sizeof(float));


double d=12.2;
    printf("value of d is %lf and address is %p \n",&d,d,sizeof(double));
}