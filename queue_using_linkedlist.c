#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;               // The data stored in the node
    struct Node* next;      // Pointer to the next node
};

struct Node* front = NULL;
struct Node* rear = NULL;


void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) { // Queue is empty
        front = rear = newNode;
        return;
    }

    rear->next = newNode; // Link new node at end
    rear = newNode;       // Update rear pointer
}


void displayQueue() {
    struct Node* temp = front;
    
    if (temp == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    
    printf("NULL\n");
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = front; // Backup front node
    front = front->next;       // Move front to next node

    if (front == NULL) {
        rear = NULL;           // If queue becomes empty, update rear
    }

    free(temp);               // Free memory of dequeued node
}
void main(){
    int choice, value;
    while(1) {

        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
         {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    
}