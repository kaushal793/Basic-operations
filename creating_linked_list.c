#include <stdio.h>
struct Node{
    int data ;
    struct Node * next;
};
void display(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }}
    
    
int main(){
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
    display(head);
       
}