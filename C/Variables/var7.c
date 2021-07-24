#include<stdio.h>
int main(int argc,char *argv[]){
    short  shortnum;
    unsigned short  ushortnum;
    signed short sshortnum;
    scanf("%d",&shortnum);
    printf("shortnum adress is %p and value is %d,%d\n",&shortnum,shortnum,sizeof(short));
    scanf("%hu",&ushortnum);
    printf("unsigned short adress is %p and value is %hu,%d\n",& ushortnum, ushortnum,sizeof(unsigned short));
    scanf("%hi",&sshortnum);
    printf("signed short  adress is %p and value is %hi,%d\n",&sshortnum,sshortnum,sizeof(signed short));

    int intnum;
    unsigned int uintnum;
    signed int sintnum ;
    scanf("%d",&intnum);
    printf("int num adress is %p and value is %d,%d\n",&intnum,intnum,sizeof(int));
    scanf("%u",&uintnum);
    printf("usintnum adress is %p and value is %u,%d\n",&uintnum,uintnum,sizeof(unsigned int));
    scanf("%d",&sintnum);
    printf("sintnum adress is %p and value is %lu,%d\n",&sintnum,sintnum,sizeof(signed int));
   
    long longnum;
    unsigned long ulongnum;
    signed long slongnum;
    scanf("%ld",&longnum);
    printf("long adress is %p and value is %ld,%d\n",&longnum,longnum,sizeof(long));
    scanf("%li",&slongnum);
    printf("signed long num adress is %p and value is %li,%d\n",&slongnum,slongnum,sizeof(signed long));
    scanf("%lu",&ulongnum);
    printf("usigned long num adress is %p and value is %lu,%d\n",&ulongnum,ulongnum,sizeof(unsigned long));

    float fnum; 
    scanf("%f",&fnum);
    printf(" float num adress is %p and value is %f,%d\n",&fnum,fnum,sizeof(float));  
    
    
    double dnum;
    scanf("%lf",&dnum);
    printf("double num adress is %p and value is %lf,%d\n",&dnum,dnum,sizeof(double));

}

