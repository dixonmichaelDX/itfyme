#include <stdio.h>
int mul=1;
int cnt=-1;
void printRec(int num){
    if(num==0){
            return;
        }
    int digit=num%10;
    int n=num;
    printRec(num/10);
    if((mul==100|| mul==1000) && (digit!=0)){
            printDigit(digit);  
            printDigit(mul);  
        }
    else if(mul==10 && digit==1){ 
            cnt=0;
        }
    else{
            if(cnt==0){
                    printDigit(10+digit);
                } 
            else{ 
                    printDigit(mul*digit);
                }
        }
    mul=mul/10;
}
int countDigit(int num){
        int mul=1;
        while(num>=10){
                num=num/10;
                mul=mul*10;
        }
        return mul;
}

void printDigit(int d){
    switch(d){
            case 1:printf("one ");
               break;
            case 2:printf("two ");
               break;
            case 3:printf("three ");
               break;
            case 4:printf("four ");
               break;
            case 5:printf("five ");
               break;
            case 6:printf("six ");
               break;
            case 7:printf("seven ");
               break;
            case 8:printf("eight ");
               break;
            case 9:printf("nine ");
               break;
            case 10:printf("ten ");
               break;
            case 11:printf("eleven ");
                break;
            case 12:printf("twelve ");
                break;
            case 13:printf("thirteen ");
                break;
            case 14:printf("fourteen ");
                break;
            case 15:printf("fifteen ");
                break;
            case 16:printf("sixteen ");
                break;
            case 17:printf("seventeen ");
                break;
            case 18:printf("eighteen ");
                break;
            case 19:printf("nineteen ");
                break;
            case 20:printf("twenty ");
                break;
            case 30:printf("thirty ");
                break;
            case 40:printf("fourty ");
                break;
            case 50:printf("fifty ");
                break;
            case 60:printf("sixty ");
                break;
            case 70:printf("seventy ");
                break;
            case 80:printf("eighty ");
                break;
            case 90:printf("ninety ");
                break;
            case 100:printf("hundread ");
                break;
            case 1000:printf("thousand ");
                break;
        }
}
int main() {
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    mul=countDigit(n);
    printf("mul=%d\n",mul);
    printRec(n);   
}