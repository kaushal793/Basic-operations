#include <stdio.h>
#include <stdlib.h>
struct stack {
    int size;
    int top;
    int * arr;
};

Isempty(struct stack* ptr){
    if(ptr->top==-1)
        return 1;
    
    else 
        return 0;
}

   Isfull(struct stack* ptr){
    if(ptr->top==ptr->size-1)
        return 1;
    
    else 
        return 0;
    
    

}

int main(){
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    
    s->arr[0]=30;
   s-> top++;
   s->arr[1]=40;
   s->top++;

if(Isempty(s)){
    printf("Stack is empty\n");
}
else {
    printf("Stack is not empty\n");   
}
if(Isfull(s)){
    printf("Stack is full\n");
}
else {
    printf("Stack is not full\n");   
}
printf("The  element in the stack is %d\n",s->arr[0]);
printf("The  element in the stack is %d\n",s->arr[1]);
}
