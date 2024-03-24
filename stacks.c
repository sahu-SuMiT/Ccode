push(): When we insert an element in a stack then the operation is known as a push. If the stack is full then the overflow condition occurs.
pop(): When we delete an element from the stack, the operation is known as a pop. If the stack is empty means that no element exists in the stack, this state is known as an underflow state.
isEmpty(): It determines whether the stack is empty or not.
isFull(): It determines whether the stack is full or not.'
peek(): It returns the element at the given position.
count(): It returns the total number of elements available in a stack.
change(): It changes the element at the given position.Indexing in stack is done from bottom to top.
display(): It prints all the elements available in the stack.


 
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
struct Stack{
    int *array;
    int top,size;
    unsigned capacity;
};
struct Stack *create_stack(unsigned capacity){
    struct Stack *s=(struct Stack*)malloc(sizeof(struct Stack));
    s->array=malloc(sizeof(int)*capacity);
    s->capacity=capacity;
    s->top=-1;s->size=0;
    return s;
}
int isEmpty(struct Stack *s){
    return !s->size;
}
int isFull(struct Stack *s){
    return s->size==s->capacity;
}
int peek(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack is empty!!!\n");
        return -1;
    }
    return s->array[s->top];
}
void push(struct Stack *s,int data){
    if(isFull(s)){
        printf("Stack Overflow!!\n");
        return;
    }
    s->array[++s->top]=data;
    printf("pushed %d\n",data);
    s->size++;
}
int pop(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack Underflow!!!\n");
        return -1;
    }
    printf("popped %d\n",s->array[s->top]);
    s->size--;
    return s->array[s->top--];
    
}
 
int main()
{
    struct Stack *s=create_stack(5);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    push(s,10);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    push(s,20);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    push(s,30);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    push(s,30);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    push(s,40);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    push(s,50);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    pop(s);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    pop(s);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    pop(s);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    pop(s);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    pop(s);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    pop(s);
    printf("capa:%d_top:%d_size:%disEmpty(s):%disFull(s);%d\n\n",s->capacity,s->top,s->size,isEmpty(s),isFull(s));
    return 0;
}
