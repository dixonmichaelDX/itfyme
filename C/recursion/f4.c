#include <stdio.h>
#include <string.h>
int gcd(int n1,int n2){
    for (int i = 0; i <=n1 && i<=n2; i++)
    {
        if( n1%n2==0){
            return n2;
        }else{
            return gcd(n2,n1%n2);
        }
        
    }
    
    

}
int main(){
   int a=4;
    int b=8;
    int c=gcd(a,b);
    printf("%d ",c);
}