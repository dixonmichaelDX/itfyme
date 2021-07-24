#include<stdio.h>
int main(int argc,char *argv[])
{
    char a;
    char b;
    char c;
printf("enter a and b , c\n");
scanf("%c %c %c", &a,&b,&c);
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