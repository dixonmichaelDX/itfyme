#include<stdio.h>
int main(){
    for (char i = 'a'; i <='z'; i++)
    {
        printf("%c ",i);
    }
    printf("\n");
    for (char i = 'A'; i <='Z'; i++)
    {
        printf("%c ",i);
    }
    printf("\n");
    for (char i = 'z'; i >='a'; i++)
    {
        printf("%c ",i);
    }

}