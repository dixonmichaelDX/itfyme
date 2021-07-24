#include<stdio.h>
 
int main() {
    int a;
     
    printf("Enter an integer\n");
    scanf("%d", &a);
     
    printf("7 X %d = %d", a, (a << 3) - a);
 
    return 0;
}