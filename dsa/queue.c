//IMPLEMENTATION OF QUEUE USING ARRAYS
#include <stdio.h>
#include<stdlib.h>
#define A 50
void insert();
void delete();
void display();
int arra[A];
int rear = - 1,front = - 1;


int main()
{
  int choice;
  while (1)
  {
    printf("\n1.Insert  \n2.Delete  \n3.Display \n4.Quit \n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1:
        insert();
        break;
      case 2:
        delete();
        break;
      case 3:
        display();
        break;
      case 4:
        exit(1);
      default:
        printf("Wrong value");
    }
  }
  return 0;
}


void insert()
{
  int e;
  if(rear == A - 1)
  printf("Queue Overflow \n");
  else
  {
    if(front == - 1)
    front = 0;
    printf("Inset the element in queue : ");
    scanf("%d", &e);
    rear = rear + 1;
    arra[rear] = e;
  }
}


void delete()
{
    if(front == - 1 )
    {
      printf("Queue Underflow \n");
      return;
    }
    else
    {
      printf("Element deleted from queue is : %d\n", arra[front]);
      front = front + 1;
    }
}


void display()
{
  int i;
  if(front == - 1)
  printf("Queue is empty \n");
  else
  {
      printf("Queue is :  ");
      for(i = front; i <= rear; i++)
      printf("%d  ", arra[i]);
      printf("\n");
  }
}