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
int main() {
   struct queue *q1;
   q1=malloc(sizeof(struct queue));
   q1->front=-1;q1->rear=-1;
   
   return 0;
}
