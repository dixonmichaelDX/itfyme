#include<stdio.h>
int main(){
    int a[4]={1,2,3,4};
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    for (int i = 0; i < 4; i++)
    {
        if (a[i]==n)
        {
            printf("element found in");
        printf("%d",a[i]);
                    /* code */
        }
        

    }
    
}