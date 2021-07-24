#include <stdio.h>
int main() {
	float ht;
	printf("Enter  the Height (in centimetres)\n");
	scanf("%f",&ht);
	if(ht < 150.0)
		  printf("Dwarf\n");
		   else
		    if((ht>=0.0) && (ht<=100.0))
	     printf(" Average Height\n");{
		  else if((ht>=151.0) && (ht <= 165.0))
		  printf("Taller\n"); 
		  else
		  printf("Abnormal height\n");
}