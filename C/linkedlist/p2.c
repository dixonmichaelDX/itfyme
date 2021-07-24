#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void main() {
    struct Node *head = NULL;
    struct Node *temp;
    for(int i=0 ; i<3 ;i++){
        struct Node *newnode = (struct Node *) malloc (sizeof(struct Node));
        newnode->data = i;
        newnode->next = NULL;
        if (head ==  NULL) {
            head->data = newnode->data ;
            head->next = NULL;
        }
        else{
            temp = head->next;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            newnode->next=temp->next;
            temp->next = newnode;
        }
    }
    temp = head->next;
    for(int i=0 ;i<3;i++) {
        while(temp->next != NULL) {
            printf("%d\n",temp->data);
        }
    }
    
 



     

}