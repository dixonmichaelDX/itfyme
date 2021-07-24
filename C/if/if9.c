#include<stdio.h>
int main()
{
   float total;
   int quantity;
   float price;
   printf("enter quentity and price");
   scanf("%d %f",&quantity, &price);
   float cost = price * quantity ;
 if(cost>=1000 )

    {
    
        total = cost *.9;

    }
    else
    {
        total=cost;
    }
    
    printf("total cost is %f",total);




}