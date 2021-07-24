#include<stdio.h>
#include<math.h>

int main(int argc,char *argv[]){
  int num, rem, prod = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        rem = num % 10; // get the right-most digit
        prod =prod* rem; // calculate product of digits
        num /=  10;  // remove the right-most digit
    }

    printf("%d", prod);

    return 0; // return 0 to operating system
}