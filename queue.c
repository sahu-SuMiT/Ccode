#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

struct queue{
    int front;
    int rear;
    int items[MAXSIZE];
};

void enqueue(struct queue *head, int value){
    if(head->rear<99){
        if(head->front == -1){
            head->front=0;
        }
        head->rear++;
        head->items[head->rear]=value;
        printf("Inserted %d in the queue with rear %d\n",value,head->rear);
        if(head->rear==99){
            printf("Queue is full\n");
        }
    }
    else{
        printf("Queue is already full\n");
    }
}
int isEmpty(struct queue *head){
    if(head->rear==-1 && head->front==-1){
        return 1;
    }
    return 0;
}
void peek(struct queue *head){
    if(isEmpty(head)){
        printf("Empty\n");
    }
    else{
        printf("first element %d\n",head->items[0]);
    }
}
int queue_size(struct queue *head){
    if(isEmpty(head)){
        return 0;
    }
    else{
        return head->rear - head->front + 1;
    }
}
void remove_from_beg_array(int array[],int size){
    int i;
    for(i=0;i<=size-2;i++){
        array[i]=array[i+1];
    }
    array[i]=0;
}
void dequeue(struct queue *head){
    if(isEmpty(head)){
        printf("Queue is already empty\n");
        return;
    } head->rear--;
    printf("removed %d from queue now rear %d\n",head->items[head->front],head->rear);
    remove_from_beg_array(head->items,MAXSIZE);
    if(head->rear==-1){
        head->front=-1;
        printf("Queue is empty now\n");
    }
    
}
int main() {
   struct queue *q1;
   q1=malloc(sizeof(struct queue));
   q1->front=-1;q1->rear=-1;
   
   return 0;
}


queue pure pointers
...............................................................................................

#include <stdio.h>
#define MAXSIZE 100
struct queue{
    int front;
    int rear;
    int items[MAXSIZE];
};

void insert(struct queue *head,int value){
    if(isFull(head)){
        printf("Queue is already full\n");
        return;
    }
    if(head->front==-1){
        head->front=0;
    }
    
    head->items[++head->rear]=value;
    printf("%d inserted with rear %d,front %d\n",value,head->rear,head->front);
    if(isFull(head)){
        printf("Queue is full NOW\n");
        return;
    }
}
void delete_at_front_in_array(int array[]){
    printf("deleted %d from array\n",array[0]);
    for(int i=0;i<MAXSIZE-1;i++){
        array[i]=array[i+1];
    }
}
void dequeue(struct queue *head){
    if(head->rear==-1 && head->front==-1){
        printf("Queue is empty now\n");
        return;
    }
    delete_at_front_in_array(head->items);
    head->rear--;
    if(head->rear==-1){
        head->front=-1;
    }
    printf("rear now %d and front now %d\n",head->rear,head->front);
    
}
int isFull(struct queue *head){
    if(head->rear==MAXSIZE-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct queue *head){
    if(head->rear==-1){
        return 1;
    }
    return 0;
}
int main() {
    struct queue *head=malloc(sizeof(struct queue));
    head->front=-1;head->rear=-1;
    insert(head,12);
    insert(head,13);
    dequeue(head);
    insert(head,120);
    insert(head,1231);
    
    int val=0;
    for(int i=0;i<MAXSIZE;i++){
        val++;
        insert(head,val);
    }
    for(int i=0;i<MAXSIZE+3;i++){
        val++;
        dequeue(head);
    }
    return 0;
}
