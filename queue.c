
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Queue{   
    int front,rear, size;
    unsigned capacity; 
    int *array;};

struct Queue* create_queue(unsigned capacity){
    struct Queue *queue=malloc(sizeof(struct Queue));
    queue->capacity=capacity;
    queue->front=queue->size=0;
    queue->rear=capacity-1;
    queue->array=malloc(sizeof(int)*queue->capacity);
    return queue;}

int isFull(struct Queue *queue){
    if(queue->size==queue->capacity){
        return 1;}
    else{
        return 0;}}

int isEmpty(struct Queue *queue){
    if(queue->size==0){
        return 1;}
    else{
        return 0;}}

void enqueue(struct Queue *queue,int item){
    if(isFull(queue)){
        printf("Queue is aleready full!\n");
        return ;}
    queue->rear=(queue->rear+1) %queue->capacity;
    queue->array[queue->rear]=item;
    queue->size=queue->size+1;
    printf("%d enqueued\n",item);}

int dequeue(struct Queue *queue){
    if(isEmpty(queue)){
        printf("\nQueue is empty\n");
        return -1;}
    int item=queue->array[queue->front];
    queue->front=(queue->front+1)%queue->capacity;
    queue->size=queue->size-1;
    return item;}

int front(struct Queue *queue){
    if(isEmpty(queue)){
        return INT_MIN;}
    return queue->array[queue->front];}

int rear(struct Queue *queue){
    if(isFull(queue)){
        return INT_MAX;}
    return queue->array[queue->rear];}

int main() {
    struct Queue *q1=create_queue(10);
    printf("f:%d_r:%d\n",q1->front,q1->rear);
    enqueue(q1,6);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,5);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,0);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,3);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,1);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,16);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,15);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,10);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,13);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,11);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,21);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    enqueue(q1,25);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    
    dequeue(q1);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    dequeue(q1);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    dequeue(q1);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    
    enqueue(q1,1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    enqueue(q1,2);printf("f:%d_r:%d\n",q1->front,q1->rear);
    enqueue(q1,3);printf("f:%d_r:%d\n",q1->front,q1->rear);
    enqueue(q1,11);printf("f:%d_r:%d\n",q1->front,q1->rear);
    enqueue(q1,21);printf("f:%d_r:%d\n",q1->front,q1->rear);
    enqueue(q1,25);printf("f:%d_r:%d\n",q1->front,q1->rear);
    
    dequeue(q1);printf("f:%d_r:%d_s:%d\n",q1->front,q1->rear,q1->size);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    
    enqueue(q1,25);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    dequeue(q1);printf("f:%d_r:%d\n",q1->front,q1->rear);
    return 0;}


queue pure pointers
...............................................................................................


queue pure linked lists
................................................................................................

#include <stdio.h>
#include <stdlib.h>
struct list{
    int data;
    struct list *next;
};
//queue 1
int rear=-1;int front=-1;

struct list *create_list(){
    struct list *head, *ptr1, *ptr2; int data; char ch;
    ptr1=head=(struct list*)malloc(sizeof(struct list));
    printf("Enter data: ");scanf("%d",&data);getchar();
    ptr1->data=data;
    ptr1->next=NULL;
    printf("Enter n to exit: ");ch=getchar();
    while(ch!='n'){
        ptr2=(struct list*)malloc(sizeof(struct list));
        printf("Enter data: ");scanf("%d",&data);getchar();
        ptr2->data=data;
        ptr2->next=NULL;
        ptr1->next=ptr2;
        ptr1=ptr2;
        printf("Enter n to exit: ");ch=getchar();
    }
    return head;
}
void print_list(struct list *head){
    printf("your linked list\n");
     while(head!=NULL){
         printf("%d ",head->data);
         head=head->next;
     }
     printf("\n");
}
struct list* enqueue(struct list *head,int value){
    if(front==-1){front=0;} rear++;
    printf("Inserted %d at rear=%d f=%d\n",value,rear,front);
    if(head==NULL){
        head=(struct list*)malloc(sizeof(struct list));
        head->data=value;
        head->next=NULL;
        return head;
    }
    struct list *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=(struct list*)malloc(sizeof(struct list));
    temp=temp->next;
    temp->data=value;
    temp->next=NULL;
    return head;
}
struct list* dequeue(struct list *head){
    if(front==-1 && rear==-1){
        printf("Queue is already empty\n");return head;
    }
    struct list* temp=head;rear--;if(rear==-1){front=-1;}
    printf("%d removed from queue, rear=%d, front=%d\n",head->data,rear,front);
    head=head->next;
    free(temp);
    temp=NULL;
    
    if(rear==-1){
        printf("Queue is empty now\n");
    }
    return head;
}
int size(struct list *head){
    int count=0;
    while(head!=NULL){
        head=head->next; count++;
    }
    return count;
}
int main() {
    struct list *head; int value=0;
    for(int i =0;i<1000;i++){
    head=enqueue(head,value);value++;
    }
    printf("size(head): %d\n",size(head));
    for(int i=0;i<1030;i++){
        head=dequeue(head);
    }
    
    return 0;
}
