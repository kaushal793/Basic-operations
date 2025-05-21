#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

 Isempty(struct Node* top,int x){
    if(top==NULL)
        return 1;
    
    else 
        return 0;
}

   Isfull(struct Node* top){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL)
        return 1;
    
    else 
        return 0;
}
// struct node push(struct Node * top,int x){
//     if(Isfull){
//         printf("Stack overflow\n");
//     }
//     else {
//         struct Node *p=(struct Ndoe*)malloc(sizeof(struct Node));
//     }
//     }
// }


// int main(){
//     struct stack *s;
//     s->size=10;
//     s->top=-1;
//     s->arr=(int*)malloc(s->size*sizeof(int));



// }
