#include <stdio.h>
void printRec(int num){
    if(num==0){
        return;
    }
    int digit=num%10;
    //printDigit(digit);
    printRec(num/10);
    printf("%d\n",digit);
    printDigit(digit);

}
void printDigit(int d){
    switch(d){
        case 1:printf("one");
               break;
        case 2:printf("two");
               break;
        case 3:printf("three");
               break;
        case 4:printf("four");
               break;
        case 5:printf("five");
               break;
        case 6:printf("six");
               break;
        case 7:printf("seven");
               break;
        case 8:printf("eight");
               break;
        case 9:printf("nine");
               break;
        case 0:printf("zero");
               break;
    }

}
int main() {
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    printRec(n);   
}