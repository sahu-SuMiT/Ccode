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
