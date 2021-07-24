#include<stdio.h>
int main()
{
int marks;
printf("enter the number");
scanf("%d",&marks);
if(marks<=100 && marks>=90)
{
printf(" is a");
}
else if(marks<=90 && marks>=80)
{
printf(" is b");
}
else if(marks<=80 && marks>=70)
{
printf(" c");
}

else if(marks<=70 && marks>=60)
{
printf(" d");
}

else if(marks<=60 && marks>=50)
{
printf("  e");
}

}

  