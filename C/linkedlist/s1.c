 //singlely linked list
 #include <stdio.h>
 #include <stdlib.h>
 struct Node {
    int data;
    struct Node *next;

 };
struct Node *insertAtend(struct Node *head,struct Node *newNode){
   
    if(head == NULL) {
        head = newNode;
        return head; 
    }
    struct Node *temp = head;
    while (temp->next!=NULL)  {
        temp = temp->next;   
    }
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
struct Node *insertAfeterData(struct Node *head,struct Node *newNode,int data){
    if(head == NULL) {
        printf("list is empty\n");
    }
    struct Node *temp = head;
    while (temp != NULL)  {
        if(temp->data == data){
            newNode->next=temp->next;
            temp->next = newNode;
            return;


        }
        temp = temp->next;   
    }
    printf("data  not found\n");
    return head;
}

struct Node *insertBeforeData(struct Node *head,struct Node *newNode,int data){
    if(head == NULL) {
        printf("list is empty\n");
    }
    struct Node *temp = head;
    while (temp != NULL)  {
        if(temp->next->data == data){
            newNode->next=temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;   
    }
    printf("data  not found\n");
    return head;
}



 void main(){
    struct Node *head = NULL;

    int nodes,data;
    printf("enter how many nodes you want in linked list\n");
    scanf ("%d",&nodes);
    printf("enter the data");
    scanf("%d",&data);
    struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
    newNode->data = data;
    newNode->next = NULL;
    head = newNode;
    for (int i=2; i<=nodes; i++){
        printf("%d location enter the data",i);
        scanf("%d",&data);
        struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
        newNode->data = data;
        newNode->next = NULL;
        head = insertAtend(head,newNode);  
    }
    display(head);
    struct Node *newNode1 = (struct Node *) malloc (sizeof (struct Node));
    newNode1->data = 20;
    newNode1->next = NULL;
  
    insertAfeterData(head,newNode1,3);
    display(head);
    struct Node *newNode2 = (struct Node *) malloc (sizeof (struct Node));
    newNode2->data = 50;
    newNode2->next = NULL;
    insertBeforeData(head,newNode2,4);
    display(head);
}
