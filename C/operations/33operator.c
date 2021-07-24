#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the number of a b c\n");
    scanf("%d %d %d",&a,&b,&c);

    printf("number of a b c is %d\n",a-b-c);
    printf("number of a b c is %d\n",a-(b-c));
    printf("number of a b c is %d\n",a*b-c);
    printf("number of a b c is %d\n",a*(b-c));
    printf("number of a b c is %d\n",(a+b)*c);
    printf("number of a b c is %d\n",a/b*c);
    printf("number of a b c is %d\n",a*b/c);
    printf("number of a b c is %d\n",a+2*(b/c));


}