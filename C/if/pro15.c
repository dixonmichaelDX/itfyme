#include <stdio.h>
int main() {
	int x;
    int y;
    printf("enter the number of x and y\n");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
    {
        printf("i qut");

    }
    else if(x<0 && y>0)
    {
        printf("II");
    }
    else if(x<0 && y<0)
    {
        printf("II");

    }
    else if(x>0 && y<0)
    {
        printf("IV");
    }
}