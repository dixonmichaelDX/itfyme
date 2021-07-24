#include<stdio.h>
int checkd(int a,int db[],int cnt);
int main(int argc, char *argv[]) {
    int n,i,j,item,cnt=0;
    printf("enter the size\n");
    scanf("%d",&n);
    int arr[n];
    int db[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
       item=arr[i];
       int x=checkd(item,db,cnt);
       printf("x =%d\n",x);
       if(x==0){
            for(j=0;j<n;j++){
                //printf("i=%d,j=%d\n",i,j);
                if(i!=j){
                   //printf("inside i! =j if of check fun\n");
                   if(item==arr[j]){
                       //printf("compare item\n");
                       printf("item=%d\n",item);
                       db[cnt]=item;
                       cnt++;
                       printf("cnt=%d\n",cnt);


                    }
                }
            }
        }
       
    }
    printf("cnt=%d",cnt);
    
    }
int checkd(int item,int db[],int cnt){
    if(cnt==0){
        printf("inside main if of check fun\n");
        return 0;
    }
    else{
        int ispresent=0;
        for(int i=0;i<cnt;i++){
            if(item==db[i]){
                ispresent=1;
                printf("is present =1\n");
                printf("db[%d]=%d\n",i,db[i]);
                break;
            }
            
        }
        if(ispresent==1){
            return 1;
        }
        else{
            return 0;
        }
    }
}

    


    

