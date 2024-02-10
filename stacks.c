push(): When we insert an element in a stack then the operation is known as a push. If the stack is full then the overflow condition occurs.
pop(): When we delete an element from the stack, the operation is known as a pop. If the stack is empty means that no element exists in the stack, this state is known as an underflow state.
isEmpty(): It determines whether the stack is empty or not.
isFull(): It determines whether the stack is full or not.'
peek(): It returns the element at the given position.
count(): It returns the total number of elements available in a stack.
change(): It changes the element at the given position.Indexing in stack is done from bottom to top.
display(): It prints all the elements available in the stack.


#include <stdio.h>

#define MAX 100
int top=-1;
int stack[MAX];

void push(int element){
    if(top>=MAX-1){
        printf("Stack Overflow!...\n");
        return;
    }
    stack[++top]=element;
    printf("%d pushed into stack\n",element);
}

void pop(){
    if(top<0){
        printf("Stack Underflow!...\n");
        return;
    }
    printf("%d poped from the stack\n",stack[top--]);
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    return 0;
}
int isFull(){
    if(top==MAX-1){
        return 1;
    }
    return 0;
}

int peek(){
    if(top<0){
        printf("Stack is Empty...\n");
        return 0;
    }
    return stack[top];
}
int count(){
    return top+1;
}
void change(int index, int element){
    if(index>=0 && index <MAX){
        printf("%d changed to %d at index %d\n",stack[index],element,index);
        stack[index]=element;
    }
    else{
    printf("Enter a valid Index...\n");
    }
}

void display(){
    if(top==-1){
        printf("Stack is Empty\n");
        return;
    }
    printf("Displaying the stack elements\n");
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
