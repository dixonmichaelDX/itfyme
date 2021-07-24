#include <stdio.h>
#include <string.h>
int ispalindrome(char str[],int first,int last){
    if (last-first==1)
    {
        return str[first]==str[last];
    }
    if (last==first)  {  
            return 1;
    }
    int same=(str[first]==str[last]) && ispalindrome(str,first+1,last-1);
    return same;

}
int main(){
    char str1[100];

    printf("enter the string ");
    scanf("%s",&str1);
    int ispal=ispalindrome(str1,0,strlen(str1)-1);
    printf("%s is %s\n", str1, ispal == 1 ? "Palindrome" : "not a palindrome");   
  return 0;
}