#include <stdio.h>
int main() {
	int pcm;
    int com;
    printf("enter the number pcm ");
    scanf("%d %d",&pcm,&com);
    
    if(pcm>=55 && com>=175)
    {
        printf("you are eligibel for pcm");
    
    }
    else
    {
        printf("your  not eligible for pcm ");
    }
  
}