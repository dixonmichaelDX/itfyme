#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int cnt;
int getRandom(int n[],int b){
    int r = rand()% b;
    while((checkExist(n,r)) != 0) {
        getRandom(n,r);
    }
    return r;
}

int checkExist(int n[],int r) {
    int found = 0;
    for(int i=0; i<cnt ;i++) {
        if(n[i] == r) {
           // printf("****%d\n",r);
            found = 1;
            break;
        } 
    }
    if(found == 0) {
        //printf("****%d\n",r);
        n[cnt] = r;
        cnt++;
        return 0;
    }
    return 1;
}

void generateAlpha(char a[10][10],int r,int c) {
    char b ='A';
    for(int i = 0; i< r; i++){
        for (int j = 0; j<c ; j++) {
            a[i][j] = b + rand() % 26;

        }
    }
}

void printarray(char a[10][10],int r,int c) {
    printf("poo..\n");
    for(int i=0; i< r; i++){
        for (int j=0; j<c ; j++) {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}

void replace(char a[10][10],int r,int c) {
    char word[7][10] ={"AKSHATHA","POOJA","RAJASHREE","SHWETHA","LATA","DIYA","RAKSHA"};
    int du[7];
    int row;
    int i;
    for (i=0;i<7;i++) {
        printf("i=%d\n",i);
        row=getRandom(du ,10);
        printf("i=%d  %d\n",i,row);
        int idx = rand() % (10 - strlen(word[i]));
        for(int j=0; j<strlen(word[i]); j++){
            printf("j=%d\n",j);
            a[row][idx+j] = word[i][j];
        }
    }
    printf("lallla");
}

void main() {
    char s[10][10];
    generateAlpha (s,10,10); 
    //printarray (s,10,10) ; 
    replace (s,10,10);
    printf("pooooooooja");
    printarray(s,10,10);
}



   
   
  

