#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void enqueue(int Q[],int *front,int *rear,int value){

    if(( *front == 0 && *rear == MAX-1) || *front == *rear+1){
        printf("Queue is full/Overflow\n");
    }
    else if(*front ==-1){
        *front = *rear=0;
        Q[*rear]=value;
 }
 else
 {
    if(*rear == MAX-1)
    *rear=0;

    else 
         *rear=*rear+1;
         Q[*rear]=value;
        

    }

 }



void dequeue(int Q[],int *front,int *rear){
    if(*front ==-1){
        printf("Queue is empty\n");
    }
    else if(*front == *rear){
        *front=*rear=-1;
    }
    else {
        if(*front == MAX-1)
            *front=0;
        else 
            *front = *front+1;
    }
}
void display(int Q[],int front,int rear){
    printf("Queue elements are:-\n");

    if(front <= rear){
        for(int i= front;i<= rear;i++){
            printf("%d\t",Q[i]);
        }
    }
    else {
        for(int i= front;i<MAX;i++){
            printf("%d\n",Q[i]);
            for(int i=0;i<=rear;i++){
                printf("%d\n",Q[i]);
            }
        }
    }
}

void main(){
    int data[MAX];
    int front=-1,rear=-1,val,n,k;
    do{
        printf("Press -1 to insert\nPress -2 to delete \npress -3 to display \nPress -4 to exit\n");
        scanf("%d",&k);
        switch(k){
            case 1:
            printf("Enter the value to insert in the queue:-");
            scanf("%d",val);
            enqueue(data,&front,&rear,val);
            break;
            case 2:
            dequeue(data,&front,&rear);
            break;
            case 3:
            display(data,front,rear);
            break;
        }
    }
    while(k!=4);

}