#include<stdio.h>
int main()
{
    char num;
    printf("enter num \n");
    scanf("%d",&num);
    switch(num){
                case 0:
        printf("zero");
        case 1:
        printf("one");
    
    break;
        case 2:
        printf("two");

     break;
        case 3:
        printf(" three");

     break;
        case 4:
        printf("four");

     break;
        case 5:
        printf("five");
             break;
        case 6:
        printf("six");
     break;
        case 7:
        printf("seveen");
             break;
        case 8:
        printf("eight");
             break;
        case 9:
        printf("nine");
    default:
        printf("invalid num plese enter valid day");
    break;
   
}
}