#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int length;

  printf("Enter a string length\n");
  gets(a);

  length = strlen(a);

  printf("Length of the string is = %d\n", length);

}