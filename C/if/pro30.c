#include<stdio.h>
int main()
{
    double x,y,result;
    
    char operator;
    printf("enter number \n");
    scanf("%c",&operator);
    printf("enter operant");
    scanf("%c",&operator);
    switch(operator){

        case '+':
        result=x+y;
    
    break;
        case '-':
        result=x-y;;

     break;
        case '*':
        result=x*y;

     break;
        case '/':
        result=x/y;
    default:
        printf("invalid num plese enter valid day");
    break;
   
}
}