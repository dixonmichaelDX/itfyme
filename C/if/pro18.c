#include <stdio.h>
#include <math.h>
int main() {
	int a; /* a, b and c are constants in algebraic expression */
    int b;
    int c;

    int exp ; // b^2-4ac
    float sqr ;

    /* accept user input */
    printf("enter the number of x and y\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("a=%d , b=%d, c=%d \n",a,b,c);
    exp=(b*b)-(4*a*c);
    printf("the value of x is %d\n",exp);
    if (exp > 0) {
        // do sqrt    
        sqr=sqrt(exp);
        float root1=(-b+sqr)/(2*a);
        float root2=(-b-sqr)/(2*a);
        printf("the square root is  %f\n",root1);
        printf("the square root is  %f\n",root2);
    } else {
        printf("please reenter , we can not find roots for the value you have given!\n");
    }
}