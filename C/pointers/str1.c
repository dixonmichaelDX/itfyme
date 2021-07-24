#include<stdio.h>
#include<string.h>
int strlen(char*);
 
void main() {
   char string[20];
   int length;
   
   printf("\nEnter any words : ");
   gets(str);
   
   length = strlen(str);
   printf("The length of the given string %s is : %d", str, length);
   getch();
}
 
int strlen(char*p) 
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}