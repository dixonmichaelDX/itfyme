#include<stdio.h>
int main()
{
    int id;
    char name[20];
    float unit;
    float amount;
    // printf("enter customer id\n");
    // scanf("%d",&id);
    // printf("enter name id\n");
    // scanf("%s",&name);
    printf("enter unit \n");
    scanf("%f",&unit);
    printf("number of unit consumed %f\n",unit);
    if (unit < 199) {
        amount = unit * 1.2 ;
    } 
    if (unit >= 199 && unit <=400) {
        amount = unit * 1.5 ;
    }
    if (unit >= 400 && unit <=600) {
        amount = unit * 1.8 ;
    }
    if (unit >= 600) {
        amount = unit * 2.0 ;
    }
    printf("amount is %f\n",amount);
    if (amount > 400) {
        amount = amount + amount *0.15;
    }
    
    if (amount < 100) {
        amount = 100;
    }
    printf("total amount is %f\n",amount);
}