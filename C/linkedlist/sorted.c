//sorted linked list 
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;

 };
struct  Node *insert(struct Node *head ,struct Node *newNode ) {
    if (head == NULL || head->data > newNode->data) {
        newNode->next = head;
        head = newNode;
        return head;
    }
    struct  Node *temp = head;
    while(temp != NULL && temp->next->data < newNode->data) {
        
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
void display(struct Node *head){

    if(head == NULL) {
       printf("linked list is empty\n");
       return;
    }
   
    struct Node *temp = head;
    while (temp!=NULL)  {
        printf("%d\n",temp->data);  
        temp = temp->next; 
    }

}
void search (struct  Node *head, int data) {
    




}

void main(){
    struct Node *head = NULL;
    int n,data;
    printf("enter how many nodes you want in linked list\n");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){
        printf("%d location enter the data",i);
        scanf("%d",&data);
        struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
        newNode->data = data;
        newNode->next = NULL;
        head = insert(head,newNode);  
    }
    display(head);
    search(head,35);
    search(head,40);
    
}