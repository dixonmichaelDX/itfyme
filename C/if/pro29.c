#include<stdio.h>
int main()
{
    char month;
    printf("enter month \n");
    scanf("%d",&month);
    switch(month){

        case 1:
        printf("jan");
    
    break;
        case 2:
        printf("feb");

     break;
        case 3:
        printf(" march");

     break;
        case 4:
        printf("april");

     break;
        case 5:
        printf("may");
             break;
        case 6:
        printf("june");
     break;
        case 7:
        printf("july");
             break;
        case 8:
        printf("aug");
             break;
        case 9:
        printf("sep");
        case 10:
        printf("opt");
        case 11:
        printf("nov");
        case 12:
        printf("dec");        
        
    default:
        printf("invalid num plese enter valid day");
    break;
   
}
}