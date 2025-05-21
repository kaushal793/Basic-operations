#include <stdio.h>
struct Node{
    int data ;
    struct Node * next;
};
void display(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("Element:%d\n",temp->data);
        temp=temp->next;
    }}
     insertatbeg(struct Node *head ,int data){
        struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
        ptr->data=data;
        ptr->next=head;
        return ptr;
       

    }
    
    
int main(){
    int val;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head->data=50;
    head->next=second;
second->data=70;
second->next=third;
    third->data=63;
    third->next=NULL;
    printf("Linked list before insertion at beginning is:-\n");
    display(head);
    printf("enter the value to insert:-");
    scanf("%d",&val);
    printf("Linked list after insertion at beginning is:-\n");
    head=insertatbeg(head,val);
    display(head);
       
}