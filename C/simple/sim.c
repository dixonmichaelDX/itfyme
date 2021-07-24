#include<stdio.h>
int main()
{
    short s=12;
    printf("value of i is %d and address is \n",s,sizeof(int));
    unsigned short is=21;
    printf("value of i1 is %d and address is \n",s1,sizeof(unsigned int));
    signed short s3=123;
    printf("value of i3 is %d and address is \n",s1,sizeof(signed int));

    
    
    int i=12;
    printf("value of i is %d and address is \n",i,sizeof(int));
    unsigned int i1=21;
    printf("value of i1 is %d and address is \n",i1,sizeof(unsigned int));
    signed int i3=123;
    printf("value of i3 is %d and address is \n",i1,sizeof(signed int));


    
    long l=12;
    printf("value of i is %d and address is \n",l,sizeof(long));
   unsigned long il=21;
    printf("value of i1 is %d and address is \n",il,sizeof(unsigned long));
    signed long l3=123;
    printf("value of i3 is %d and address is \n",il,sizeof(signed long));


float f=12.2;
    printf("value of i is %d and address is \n",i,sizeof(float));


}