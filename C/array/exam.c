//#include <stdio.h>
/*int max(int x,int y){
    return y>x?y:x;
}
void main(){
    int a[]={2,6,0,7,2,0,1,5};
    int z=a[0],n=8,i=0,c=a[0];
    for(i=0;i<n;i++){
        c=max(a[i],c+a[i]);
        z=max(z,c);
    }
    printf("%d",z);
}*/
/*void main(){
    int n=12,res=1;
    while(n>2){
        n-=2;
        res*=2;
    }
    printf("%d",n*res);

}*/
/*void main(){
    int a[3][4]={2,4,6,8,10,12,12,10,8,6,4,2};
    int i=0,j,k=13;
    while(i<3){
        for(j=0;j<4;j++){
            if(a[i][j]>k){
                k=a[i][j];

            }
        }
        i++;
    }
    printf("%d",k);
}*/
/*void main(){
    int b=7860;
    int a=0;
    while(b>0){
        a=a+(b%10);
        b=b/10;

    }
    printf("%d",a);

}*/
/*#include<stdlib.h>
struct emp{
    int len;
    char name[1];

};
int main(){
    char newname[]="rahul";
    struct  emp *p=(struct emp *)malloc (sizeof(struct emp)-1+strlen(newname)+1);
    p->len=strlen(newname);
    strcpy(p->name,newname);
    printf("%d#%s",p->len,p->name);
    return 0;
}*/
/*#include <stdio.h>
void main(){
    printf(5+"sample");
    
}*/
/*#include<stdio.h>
void main(){
    int i=0,j=0,sum=0;
    for(i=1;i<999;i*=3){
        for(j=0;j<i;j++){
            sum++;
        }

    }
    printf("%d",sum);
}
*/
/*#include<stdio.h>
# define CUBE(x)(x*x*x)
void main(){
    int a,b=3;
    a=CUBE(b++);
    printf("%d %d",a,b);
}*/
/*#include<stdio.h>
int main(){
char *p;
p="%d\n";
p++;
p++;
printf(p-2,300);
}*/
/*#include<stdio.h>
void main(){
    int a=5;
    int b=10;
    int c=a<<3|b;
    printf("%d",c);

}*/
/*#include<stdio.h>
void main(){
    char p;
    char buf[10]={1,2,3,4,5,6,9,8};
    p=(buf+1)[5];
    printf("%d",p);
}*/

#include<stdio.h>
/*void main(){

    char ch=10;
    void *ptr=&ch;
    printf("%d,%d",*(char*)ptr,++(*(char*)ptr));
}*/
void main(){
    char *a[4]={"jaya","mahe","chandra","buchi"};
    int s=sizeof(a)/sizeof (*a);
    printf("%d",sizeof(a));
    printf("%d",sizeof (*a));
    printf("%d",s);
}


   
