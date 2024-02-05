#include <stdio.h>
#define MAXSIZE 100
struct queue{
    int front;
    int rear;
    int items[MAXSIZE];
};
struct queue q;

void enqueue(struct queue *q, int value){
    static int count=1;
    if(q->rear==MAXSIZE-1){//at rear==99 count == 100 count=101...
        
        if(count>100){
            printf("Queue is already full\n");
        }
        else{
        q->items[q->rear]=value;
        printf("Inserted %d into queue\n",value);
        printf("Queue is Full\n");
        }
    }
    else{
        q->rear++;//rear=0,1,2,...98, 
        if(q->front == -1){
            q->front = 0;
        }
        q->items[q->rear]=value;
        printf("Inserted %d into queue\n",value);
    }
    count++;
}

int main() {
   struct queue *temp;
   int value=11;
    for(int i=0;i<101;i++){
        enqueue(temp,value);
        value++;
    }
   return 0;
}
//need some correction
int isEmpty(){
    
    if(q.front==-1 && q.rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(q.rear==MAXSIZE-1){
        printf("q.rear = %d\n",q.rear);
        return 1;
    }
    return 0;
}
