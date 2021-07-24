#include <stdio.h>
int zero(int a,int b){
    if(a>0 && b>0){
        if(a>b){
            return b;
        }
        return a;
    }
    if(a<0 && b<=0){
        if(a<b){
            return b;
        }
        return a;
    }
    if(a<=0 && b>=0){
        if(-(a)<b){
            return a;
        }
        return b;
    }
    if(a>=0 && b<=0){
        if(a<-(b)){
            return a;
        }
        return b;
    }

}
void main(){
    int a[7]={1,2,3,4,-5,6,-7};
    int b[2];
    int c=0;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(c==0){
                b[0]=a[i];
                b[1]=a[j];
                c++;
            }
            else{
                int x=b[0]+b[1];
                int y=a[i]+a[j];
                //printf("b=%d b=%d x=%d. a=%d b=%dy=%d\n",b[0],b[1],x,a[i],a[j],y);
                int res=zero(x,y);
                //printf("res=%d\n",res);
                if(res==y){
                    b[0]=a[i];
                    b[1]=a[j];
                }
            }   
        }  
    }
    printf("(%d,%d)",b[0],b[1]);
}
