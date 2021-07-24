#include <stdio.h>
#include <string.h>
#define MAX_BOOK_NUM 1000
int numBooks=0;
struct book {
    char title[128];
    char author[128];
    float price;
    int numCopies;
    char sub[128];
    int  year ;
    int uniqueId ; 
    int stock;
} ;
struct book bks[MAX_BOOK_NUM] ;
void add(){
    int index=0;
    printf("\n title:");
    scanf("%s",bks[0].title);
    printf("\n author:");
    scanf("%s",bks[index].author);
    printf("\n price:");
    scanf("%f",&bks[index].price);
    printf("\n numcopies:");
    scanf("%d",&bks[index].numCopies);
    printf("\n year:");
    scanf("%d",&bks[index].year);
    printf("\nuniqueId:");
    scanf("%d",&bks[index].uniqueId);
    numBooks= numBooks+1;
}
void list(int index){
    int count=index+1;
    printf("sl no\ttitle\tauthour\tprice\tnumCopies\tid\tyear\n");
    for(int i=0;i<index;i++){
        printf("%d",count--);
        printf("\t%s",bks[i].title);
        printf("\t%s",bks[i].author);
        printf("\t%f",bks[i].price);
        printf("\t %d",bks[i].numCopies);
        printf("\t%d",bks[i].uniqueId);
        printf("\t%d",bks[i].year);
    }
}
void delete(){
    int uniqueIds;
    printf("enter the uniqueId to remove the book");
    scanf("%d",&uniqueIds);
    for(int i=0;i<numBooks;i++){
        if(uniqueIds==bks[i].uniqueId){
            for(int j=i;j<numBooks;j++){
                bks[j]=bks[j+1];
            }
        numBooks--;
        break;
        }
    }
}
void write() {
    FILE *fp = fopen("books4.data","w") ;
    if (fp != NULL) {
        fwrite(&bks, sizeof(struct book), 1, fp) ; 
        printf("Saved to file!!!\n");
    }
    fclose(fp);
    return ;
}
void read() {
    FILE *fp = fopen("books4.data","r") ;
    struct book bk[1];
    if (fp != NULL) {
        fread(&bk, sizeof(struct book),1, fp) ; 
    }
    fclose(fp);
    for(int i=0;i<1;i++){
        printf("%s\n",bk[i].title);
        printf("%s\n",bk[i].author);
        printf("%f\n",bk[i].price);
        printf("%d\n",bk[i].numCopies);
        printf("%d\n",bk[i].uniqueId);
        printf("%d\n",bk[i].year);
    }
    return ;
}
int main() {
    char choice;
    printf("welcome to library system\n");
    printf("available options\n");
    printf(" a- to add the book\n m- to modify booknumber\n d-to delete\n v-to view\n s- to save library data to file\n l-list all the book details\n q-to quit\n h-to help\n ");
    scanf("%c",&choice);
    while(choice != 'q') {
        switch(choice) {
            case 'a':add(numBooks);
                write();
                read();
                break;
            case 'l':list(numBooks);
                break;
            case 'd':delete();
                break;
            case 'q':quit();
                break;
            case 'h':help();
            break;
        default:printf("enter the valid option\n");
            break;
        }
       scanf("%c",&choice);
    }
    return 0;
}