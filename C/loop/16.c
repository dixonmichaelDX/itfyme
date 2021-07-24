#include<stdio.h>
#include<math.h>

int main(int argc,char *argv[]){
  int n;
  int rev=0;
  int rem;
  printf("enter the number\n");
  scanf("%d",&n);
  while (n>0)
  {
      rem=n%10;
  rev=rev*10+rem;
  n=n/10;
  }
  printf("%d",rev);

}