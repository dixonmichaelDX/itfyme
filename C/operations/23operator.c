#include<stdio.h>
#include<string.h>
int main(){
  char a[250] ; 
  printf("enter the string  \n");
  scanf("%s",&a);
  printf("string after converting to the uppercase is: %s", strupr(a)); 
  return 1; 
} 