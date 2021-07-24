#include<stdio.h>
int main() {  
    char a;
    char b;
  printf("enter the 2 charater\n");
  scanf("%c %c\n",&a,&b);
  printf("%c=%d\n",a,a);
  printf("%c=%d\n",b,b);
  printf("%c+%c=%d%c\n",a,b,a+b,a+b);

printf("frist char=%c \nsecond char=%c,\n ascii addition  is %d,\n ascii value is %c\n",a,b,a+b,a+b);

  
}