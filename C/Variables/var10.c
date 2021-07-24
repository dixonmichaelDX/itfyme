#include<stdio.h>
#include<stdbool.h>


int main(int argc,char *argv[])
{
    //char ch;
    //ch=argv[1];
    printf("value is %c, size is %d\n",argv[1],sizeof(char));

   // bool b;
   // b=aiot(argv[2]);
    printf("value is %d, size is %d\n",argv[2],sizeof(bool));
     
   // char name[128];
    //name[128]=argv[3];
    printf("value is %s, size is %d\n",argv[3],sizeof(argv));

}