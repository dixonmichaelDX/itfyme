#include<stdio.h>
int main(int argc,char *argv[])
{
    int a;
    int b;
    int c;
printf("enter a and b , c");
scanf("%d %d %d", &a,&b,&c);
printf("value of a nd b is %d \n",a>b && a>c);
printf("value of a nd b is %d \n",a>b || a>c);

printf("value of a nd b is %d \n",a>b && b>c);
printf("value of a nd b is %d \n",a>b || a<c);

printf("value of a nd b is %d \n",a<b && a<c);
printf("value of a nd b is %d \n",a<b || a<c);

printf("value of a nd b is %d \n",a<b && b<c);
printf("value of a nd b is %d \n",a<b || b<c);

printf("value of a nd b is %d \n",a=b && a<c);
printf("value of a nd b is %d \n",a=b || a<c);

printf("value of a nd b is %d \n",a=b && b>c);
printf("value of a nd b is %d \n",a=b || b>c);

printf("value of a nd b is %d \n",a!=b && b>c);


printf("value of a nd b is %d \n",a!=b || b!=c);


}