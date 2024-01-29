struct list{
    int data;
    struct list *next;
};

struct list *create_list(){
    struct list *head, *ptr1, *ptr2; int data; char ch;
    ptr1=head=malloc(sizeof(struct list));
    printf("Enter data: ");scanf("%d",&data);getchar();
    ptr1->data=data;
    ptr1->next=NULL;
    printf("Enter n to exit: ");ch=getchar();
    while(ch!='n'){
        ptr2=malloc(sizeof(struct list));
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
     while(head!=NULL){
         printf("%d ",head->data);
         head=head->next;
     }
     printf("\n");
     
}
struct list *delete_at_beginning(struct list *head){
    if(head==NULL){
        return 0;
    }
    struct list *temp=head;
    head=head->next;
    temp->next=NULL;

    free(temp);
    temp=NULL;
    return head;
}
void delete_at_end(struct list *head){
    struct list *temp=head;
    while(temp->next!=NULL){
        head=temp;
        temp=temp->next;
    }
    free(temp);
    temp=NULL;
    head->next=NULL;
}
void delete_at_index(struct list *head){
    struct list *temp=head; int index; 
    printf("Enter index: ");scanf("%d",&index);
    for(int i=0;i<index;i++){
        head=temp;
        temp=temp->next;
    }
    head->next=temp->next;
    free(temp);   
    temp=NULL;
}

struct list *insert_at_beginning(struct list *head){
    struct list *temp=head; int data; char ch;
    head=malloc(sizeof(struct list));
    printf("Enter data: ");scanf("%d",&data);getchar();
    head->data=data;
    head->next=temp;
    return head;
}

void insert_at_end(struct list *head){
    struct list *temp=head; int data;
    while(head!=NULL){
        temp=head;
        head=head->next;
    }
    head=temp->next=malloc(sizeof(struct list));
    printf("Enter data at last:");scanf("%d",&data);
    head->data=data;
    head->next=NULL;
}
void insert_at_index(struct list *head){
    int index; int data;struct list*temp=head;
    printf("Enter index: ");scanf("%d",&index);
    for(int i=0;i<index;i++){
        temp=head;
        head=head->next;
    }
    temp->next=malloc(sizeof(struct list));
    temp=temp->next;
    temp->next=head;
    printf("Enter data for the index: ");scanf("%d",&data);
    temp->data=data;
}
struct double_list{
    struct double_list *prev;
    int data;
    struct double_list *next;
};
struct double_list *create_double_list(){
    struct double_list *head, *ptr1, *ptr2; int data; char ch;
    ptr1=head=malloc(sizeof(struct double_list));
    printf("Enter data: ");scanf("%d",&data);getchar();
    ptr1->data=data;
    ptr1->prev=NULL;
    ptr1->next=NULL;
    printf("Enter n to exit: ");ch=getchar();
    while(ch!='n'){
        ptr2=malloc(sizeof(struct double_list));
        printf("Enter data: ");scanf("%d",&data);getchar();
        ptr2->data=data;
        ptr2->prev=ptr1;
        ptr2->next=NULL;
        ptr1->next=ptr2;
        ptr1=ptr2;
        printf("Enter n to exit: ");ch=getchar();
    }
    return head;
}
void print_double_list(struct double_list *head){
    while(head!=NULL){
        printf("%p %d %p\n",head->prev,head->data,head->next);
        head=head->next;
    }
}
struct double_list *add_node_at_beginning(struct double_list *head){
    struct double_list *temp=head; int data;
    head=malloc(sizeof(struct double_list));
    head->next=temp;
    head->prev=NULL;
    printf("Enter data: ");scanf("%d",&data);
    head->data=data;
    temp->prev=head;
    return head;
}
void add_node_at_end(struct double_list *head){
    struct double_list *temp;int data;
    while(head!=NULL){
       temp=head;
       head=head->next; 
    }
    
    temp->next=head=malloc(sizeof(struct double_list));
    head->prev=temp;
    printf("Enter data: ");scanf("%d",&data);
    head->data=data;
    head->next=NULL;
}
void add_node_at_index(struct double_list *head){
    struct double_list *temp=head;int data;int index;
    printf("Enter index: ");scanf("%d",&index);
    for(int i=0;i<index;i++){
        head=temp;
        temp=temp->next;
    }
    head->next=malloc(sizeof(struct double_list));
    head->next->prev=head;
    head->next->next=temp;
    printf("Enter data: ");scanf("%d",&data);
    head->next->data=data;
    temp->prev=head->next;
}
void delete_at_last(struct node *head)
{
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        head=temp;
        temp=temp->next;
    }
        head->next=NULL;
        free(temp);
}
struct node * delete_at_beginning(struct node *head)
{
    struct node *temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
    return head;
}
void delete_at_index(struct node *head){
    struct node*temp=head;int index;
    printf("Enter index: ");scanf("%d",&index);
    for(int i=0;i<index;i++){
        head=temp;
        temp=temp->next;
    }
    head->next=temp->next;
    temp->next->prev=head;
    free(temp);
}
struct double_list * merge_double_list(struct double_list *head1,struct double_list*head2){
    struct double_list *temp=head1;
    if(head1==NULL){
        return head2;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head2;
    if(head2!=NULL){
    head2->prev=temp;
    }
    return head1;
}

struct circular_list{
    int data;
    struct circular_list *next;
};
struct circular_list *create_circular_list(){
    struct circular_list *head, *ptr1, *ptr2; int data; char ch;
    ptr1=head=malloc(sizeof(struct circular_list));
    printf("Enter data: ");scanf("%d",&data);getchar();
    ptr1->data=data;
    ptr1->next=NULL;
    printf("Enter n to exit: ");ch=getchar();
    while(ch!='n'){
        ptr2=malloc(sizeof(struct circular_list));
        printf("Enter data: ");scanf("%d",&data);getchar();
        ptr2->data=data;
        ptr2->next=NULL;
        ptr1->next=ptr2;
        ptr1=ptr2;
        printf("Enter n to exit: ");ch=getchar();
    }
    ptr2->next=head;
    return head;
}
void print_circular_list(struct circular_list *head){
    struct circular_list *temp=head;int data;
    printf("%d %p\n",temp->data,temp->next);
    temp=temp->next;
    
     while(temp!=head){
         printf("%d %p\n",temp->data,temp->next);
         temp=temp->next;
     }
     printf("\n");    
}
struct circular_list *add_at_beginning(struct circular_list *head){
    struct circular_list *temp=head;int data;
    struct circular_list *temp2=temp;
    head=malloc(sizeof(struct circular_list));
    printf("Enter data at beginning: ");scanf("%d",&data);
    head->data=data;
    head->next=temp;
    while(temp2->next!=temp){
        temp2=temp2->next;
    }
    temp2->next=head;
    return head;
}
void add_at_end(struct circular_list *head){
    struct circular_list *temp=head;int data;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=temp=malloc(sizeof(struct circular_list));
    printf("Enter data at end: ");scanf("%d",&data);
    temp->data=data;
    temp->next=head;
}
void add_at_index(struct circular_list *head){
    struct circular_list *temp=head;int index; int data;
    printf("Enter index: ");scanf("%d",&index);
    for(int i=0;i<index;i++){
        head=temp;
        temp=temp->next; //0 1 2 3 4 5
    }
    head->next=malloc(sizeof(struct circular_list));
    head->next->next=temp;
    printf("Enter data at index: ");scanf("%d",&data);
    head->next->data=data;

}
struct circular_list *delete_at_beginning(struct circular_list *head){
    struct circular_list *temp=head;
    temp=temp->next;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=head->next;
    free(head);
    head=temp->next;
    return head;
}
void delete_at_end(struct circular_list *head){
    struct circular_list *temp=head;
    temp=temp->next;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=head;
}
void delete_at_index(struct circular_list *head){
    struct circular_list *temp=head;int index;
    printf("Enter index: ");scanf("%d",&index);
    for(int i=0;i<index;i++){
        head=temp;
        temp=temp->next;
    }
    head->next=temp->next;
    free(temp);
}

//circular double linked list
struct node{
    struct node *prev;
    int data;
    struct node*next;
};

struct node *create_circular_double(struct node *head){
    struct node *ptr1,*ptr2; int data;char ch;
    ptr1=head=malloc(sizeof(struct node));
    ptr1->prev=NULL;
    printf("Enter data: ");scanf("%d",&data);getchar();
    ptr1->data=data;
    ptr1->next=NULL;
    printf("Enter n to exit: ");ch=getchar();
    while(ch!='n'){
        ptr2=malloc(sizeof(struct node));
        ptr2->prev=ptr1;
        printf("Enter data: ");scanf("%d",&data);getchar();
        ptr2->data=data;
        ptr2->next=head;
        ptr1->next=ptr2;
        ptr1=ptr2;
        printf("Enter n to exit: ");ch=getchar();
    }
    head->prev=ptr2;
    return head;
}

void print_circular_double(struct node *head){
    struct node *temp=head;
    printf("HEAD: %p\n",head);
    printf("%p %d %p\n",temp->prev,temp->data,temp->next);
    temp=temp->next;
    while(temp!=head){
        printf("%p %d %p\n",temp->prev,temp->data,temp->next);
        temp=temp->next;
    }
}
