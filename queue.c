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
