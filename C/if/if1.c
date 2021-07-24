#include<stdio.h>
int main()
{
    int m=55;
    
    if(m>0 && m<56)
    printf("failing %d\n",m);
    if(m>55 && m<65)
    printf("unsatisfactory %d\n",m);
    else
    printf("satisfactory %d\n",m);

}