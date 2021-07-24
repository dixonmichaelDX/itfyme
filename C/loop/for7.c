#include <stdio.h>

int main()
{
    int i, n, sum=0;

    printf("Enter the number ");
    scanf("%d", &n);

    for(i=2; i<=n; i++)
    {
        if (i%2==0)
        {
          sum=sum+i;
        }

 
    }

    printf("%d", sum);

}