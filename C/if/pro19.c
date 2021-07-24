#include <stdio.h>
#include <math.h>
int main()
{
    int roll;
    char name[20];
    int percentage;
    int p1,p2,p3,total;
    printf("enter your rool number\n");
    scanf("%d",&roll);
    printf("enter your name\n");
    scanf("%s",&name);
    printf("name%s\n",name);
    printf("enter physics marks");
    scanf("%d %d %d",&p1,&p2,&p3);
    total=p1+p2+p3;
    percentage=total/3;
    printf("total number is %d",total);
    
    printf("your marks persentage is %d",percentage);

}