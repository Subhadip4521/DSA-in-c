//
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    
}*head;

void create_node (int n);
void display();
void insert();


int main(){
    int n, data_value;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    create_node(n);
    printf("The list is: ");
    display();
    printf("Enter data to insert at begining of the list: ");
    scanf("%d", &data_value);
    insert(data_value);
    display();
    return 0;
}

void create_node(int n){
    struct node *newnode, *temp;
    int data, e1, i;

    head = (struct node*) malloc(sizeof(struct node));

    printf("Enter the element node 1 : ");
    scanf("%d", &e1);
    head -> data= e1;
    head->next=NULL;
    temp=head;
    
    for(i=2; i<=n; i++){
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("Enter next element: ");
        scanf("%d", &data);
        newnode -> data= data;
        newnode -> next=NULL;
        temp->next=newnode;
        temp=temp->next;

    }
}

void insert(int data_value){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data_value;
    temp->next=head;
    head=temp;
}

void display(){
    struct node* temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp= temp->next;
    }
    printf("\n");
}