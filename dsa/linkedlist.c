#include<stdio.h>
#include<stdlib.h>
void creat_node();
void Display();
void insert();

struct node{
    int data;
    struct node *next ;
} *head;


int main ()
{
    int n,data_value;
  printf("Enter the totel number of node "); 
  scanf("%d",&n);
  creat_node(n);
  printf("The link list is : ");
  Display();
  printf("Enter new node element : ");
  scanf("%d",&data_value);
  insert(data_value);
  printf("The link list is : ");
  Display();
  return 0; 
}
void creat_node(int n){
    struct node *newnode, *temp;
    int data,e1,i; 
    head = (struct node *)malloc(sizeof(struct node));

    printf("Enter the element of node 1 : ");
    scanf("%d",&e1);
    head -> data = e1;
    head -> next = NULL;
    temp = head;
    for(i=2;i<=n;i++){
        printf("Enter next element : ");
        scanf("%d",&data);
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode -> data = data;
        newnode ->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }
}

void Display(){
    struct node *temp;
    temp = head;
    while(temp != NULL)
{
    printf("%d\t", temp->data);
    temp = temp->next;
 }
    printf("\n");
    
}

void insert(int data_value){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp ->data=data_value;
    temp->next=head;
    head=temp;

}