#include <stdio.h>

// swap first and last digits of a number

int main(int argc, char *argv[]) {
    int n ; // for input 
    int result=0;
    printf("swap first and last digits of a number\n") ;
    printf("Enter the number: \n");
    scanf("%d", &n) ;
    

    

    int firstDigit = -1 ;   
    int multiplier = 1 ; 
    int digit ;  
    int cnt = 1 ;
    while(n > 10) {
        digit = n % 10 ;
        
        if (firstDigit == -1)
            firstDigit = digit ;
        else
            result = result + digit * multiplier ;
        multiplier = multiplier * 10 ;
        n = n / 10 ;
        printf("loop#: %d first digit: %d digit : %d  multiplier: %d num : %d result: %d \n",cnt, firstDigit, digit, multiplier, n, result) ;
        cnt++;
    }
    


    result = result + n; // adding to 1st place 
    printf("digit : %d  multiplier: %d num : %d result: %d \n", digit, multiplier, n, result) ;
    result = result + firstDigit * multiplier; 
    printf("after digit swap\n");
    printf("%d\n",result) ;
    
}