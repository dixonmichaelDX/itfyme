#include<stdio.h>
int main()
{
    char num;
    printf("enter num \n");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("sunday");
    
    break;
        case 2:
        printf("monday");

     break;
        case 3:
        printf(" tuesday");

     break;
        case 4:
        printf("wednesday");

     break;
        case 5:
        printf("thursday");
             break;
        case 6:
        printf("friday");
     break;
        case 7:
        printf("saterday");
    default:
        printf("invalid num plese enter valid day");
    break;
   
}
}