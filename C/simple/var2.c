#include<stdio.h>
int main()
{

    short a;
    unsigned short b;
    signed short c;

a=10;
b=20;
c=30;

    printf("value of i1 is %hi and address is %hi\n",a,sizeof(unsigned int));
    printf("value of i is %hi and address is %hi\n",b,sizeof(int));
    printf("value of i3 is %hi and address is %hi\n",c,sizeof(signed int));

       int i;
unsigned int i1;
 signed int i3;
    i=1;
    i1=12;
    i3=21;
    
 
    printf("value of i is %d and address is %d\n",i,sizeof(int));
    
    printf("value of i1 is %d and address is %d\n",i1,sizeof(unsigned int));
   
    printf("value of i3 is %d and address is %d\n",i1,sizeof(signed int));


    
    long l;
       unsigned long il;
          signed long l3;
l=1;
il=21;
l3=123;


    printf("value of l is %lu and address is %lu\n",l,sizeof(long));

    printf("value of l1 is %lu and address is %lu\n",il,sizeof(unsigned long));
 
    printf("value of l3 is %lu and address is %lu\n",il,sizeof(signed long));


float f;
    printf("value of f is %f and address is %f\n",f,sizeof(float));


double d=12.2;
    printf("value of d is %lf and address is %lf \n",d,sizeof(double));
}