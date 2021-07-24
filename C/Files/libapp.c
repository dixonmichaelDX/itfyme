#include <stdio.h>

struct book {

    int year;
    int uniqueId;
    
} ;

int main() {
  struct book b1 ;
  num.n1 = 10 ; num.n2 = 100; num.n3 = 1000;
  FILE *fp ; // declare a file pointer 
  fp = fopen("myNum.txt","w") ;
  if (fp != NULL) {
      fprintf(fp,"%d %d %d",num.n1, num.n2, num.n3) ;-
  } else {
    printf("Unable to create the file \n");
  }  
  fclose(fp) ;
}