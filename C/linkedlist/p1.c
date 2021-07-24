#include <stdio.h>
#include <memory.h>

struct Node {
    int data;
    struct Node *next;
};
void main() {
    struct Node *head = NULL;
    struct Node *temp;
    struct Node *newnode = (struct Node *) malloc (sizeof(struct Node));
    for(int i=0 ; i<3 ;i++){
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
            temp->next = newnode;
        }
    }
    for(int i=0 ;i<3;i++) {
        while(temp->next != NULL) {
            printf("%d\n",temp->data);
        }
    }
    
 



     

}