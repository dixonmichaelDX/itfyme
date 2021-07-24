#include<stdio.h>
#include<string.h>
 
int main() {
   char s1[100];
   char s2[100];
 
   printf("\nEnter the String 1 : ");
   gets(s1);
 
   strcpy(s2, s1);
   printf("\nCopied String : %s", s2);
 

}