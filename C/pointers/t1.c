#include<stdio.h>
#include<string.h>
#define Num_Book_Max 1000
struct books
{
    char title[120];
    char authur[120];
    int price;
    int noc;
};
struct books bks[Num_Book_Max] ;
int totalcopies=0;
int stock=0;
int numbook=0;

void addBookLibrary(struct books newbooks){
    strcpy(bks[numbook].title,newbooks.title);
    strcpy(bks[numbook].authur,newbooks.authur);
    bks[numbook].price,newbooks.price;
    bks[numbook].noc,newbooks.noc;

}
void add(){
    getchar();
    struct books temp;{
        printf("enter the title\n");
        fgets(temp.title,128,stdin);
        printf("enter the authur\n");
        fgets(temp.authur,125,stdin);
        printf("enter the price\n enter the num of copy\n\n");
        scanf("%f ",&temp.price,&temp.noc);
        scanf("%d\n",&temp.noc)
        addBookLibrary(temp);


    }
}

int main(){
    
    char option;
    do
    {
        printf("Enter the option");
        scanf("%s",&option);
        switch (option)
        {
        case 'a':
        add();
            break;
        
        default:
            break;
        }
    } while (option!='f');
    
}

