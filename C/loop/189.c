#include<stdio.h>
int main(){
    int num;
    int i,j,n;
    printf("enter th enumber");
    scanf("%d",&n);
    for ( i = 1; i<=n; i++){
        num=n;
    
        for ( j = 1; j <=n; j++){
    
        if (i==1)
        {
            printf("%d",num);
        }
        else if (i==j)
        {
            printf(" %d",num);
        }
        else if (j>i)
        {
            printf(" %d",num);
        }
        else
        {
            printf(" %d",num);
            num--;
        }
        
        
        
    }
    printf("\n");
    
}
}