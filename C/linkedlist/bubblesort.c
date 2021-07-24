#include <stdio.h>
#include <stdlib.h>
struct  Node 
{
   int data ;
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
void bubblesorting (struct  Node *head) {
    struct Node *p;
    struct Node *q;
    struct Node *end;
    int temp;
    int cnt=0;
    int innerloop=0;
    for ( end=NULL; end!= head->next; end=q) {
        //printf("p=%p,p->data =%d,p->next=%p\n",p,p->data,p->next);
        cnt++;
        for (p=head ;p->next!=end; p=p->next) {
            innerloop++;
            q=p->next;
            if(p->data > q->data) {
                temp = p->data;
                p->data = q->data;
                q->data = temp;

            }
        }
    }
    printf("outer cntr=%d, innerloop=%d, %d\n",cnt,innerloop,cnt+innerloop);               

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
        head = insertAtend(head,newNode);  
    }
    display(head);
    bubblesorting(head);
    display(head);

}

