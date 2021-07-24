#include<stdio.h>
int main()
{
    // int 
    int a=122;
printf("value of int %d is %d \n",a,sizeof(int));
    unsigned int b=-12;
printf("value of int %d is %d \n",b,sizeof(unsigned int));
    signed int c=12;
printf("value of int %d is %d \n",c,sizeof(signed int));

printf("\n");



   short s1=122;
printf("value of short %d is %d \n",s1,sizeof(short));
    unsigned short s2=3;
printf("value of int %d is %d \n",s2,sizeof(unsigned short));
    signed short s3=12;
printf("value of int %d is %d \n",s3,sizeof(signed short));


printf("\n");

   long l1=122;
printf("value of long  %d is %d \n",l1,sizeof(short));
    unsigned long l2=3;
printf("value of unsigned long %d is %d \n",l2,sizeof(unsigned long));
    signed short l3=12;
printf("value of signed long %d and size is %d \n",l3,sizeof(signed long));
}


