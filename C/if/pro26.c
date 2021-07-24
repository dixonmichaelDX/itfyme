#include<stdio.h>
int main()
{
    char grade;
    printf("enter grade \n");
    scanf("%c",&grade);
    switch(grade){
        case 'E':
        printf("Excellent");
    
    break;
        case 'V':
        printf("Very Good");

     break;
        case 'G':
        printf(" Good");

     break;
        case 'A':
        printf("Average");

     break;
        case 'F':
        printf("Fail");
    default:
        printf("invalid grade plese enter valid grade");
    break;
   
}
}