#include <stdio.h>
int main(int argc, char *argv[]){
    int n,f,num=0;
    int f0=0 ,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0;
    printf("enter the value n \n ");
    scanf("%d",&n);
    
    while(n>0){
        num  =(n%10);
             
        switch(num){
    case 0:
        f0++;
        break;
    case 1:
        f1++;
        break;
     case 2:
        f2++;
        break;
     case 3:
        f3++; 
        break;
     case 4:
          f4++;
          break;
     case 5:
          f5++;
          break;
     case 6:
          f6++;
          break;
     case 7:
          f7++;
          break;
     case 8:
          f8++;
          break;
     case 9:
          f9++;
          break;
    }
        n=n/10;
    }
        
        printf("%d\n",f0);
        printf("%d\n",f1);
        printf("%d\n",f2);
        printf("%d\n",f3);
        printf("%d\n",f4);
        printf("%d\n",f5);
        printf("%d\n",f6);
        printf("%d\n",f7);
        printf("%d\n",f8);
        printf("%d\n",f9);
    return 0;
}