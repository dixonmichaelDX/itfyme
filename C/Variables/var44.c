#include <stdio.h>
#include <limits.h>


int main(int argc, char *argv[]) {
    // int a = 0x7FFFFFFF ;
    // int b = 0x80000000 ;
    short a = 0x7FFF ;
    short b = 0x8000 ;
    unsigned short c = 0x0000 ;
    unsigned short d = 0xffff ;
    unsigned int test = -1 ;
    printf("value is %u \n",test);
    // int a = INT_MAX ;
    // int b = INT_MIN ;
    // printf("value is %x,%x \n",a,b);
    // printf("value is %d,%d \n",a,b);
    // printf("value is %x,%x \n",c,d);
    // printf("value is %d,%d \n",c,d);
}