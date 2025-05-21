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
void push(struct stack *ptr,int val){
    if(Isfull(ptr)){
        printf("Stack overflow\n");
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("Element pushed in the stack is %d\n",ptr->arr[ptr->top]);
    }
 }
 int pop(struct stack *ptr){
    if(Isempty(ptr)){
        printf("Stack underflow cant pop elements\n");
    }
    else {
        int val=ptr->arr[ptr->top];

        ptr->top--;
        printf("Element popped from the stack is %d\n",val);
        return val;
        
    }
 }


int main(){
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));


  printf("%d\n",Isempty(s));
 printf("%d\n",Isfull(s));
  

push(s,30);
push(s,40);

pop(s)
;

}
