#include<stdio.h>
#include<stdlib.h>
#define Max 3
struct queue
{
    int item[Max];
    int f;
    int r;
};
typedef struct queue q;
int create(q*s)
{
    s->f=-1;
    s->r=-1;
}
int insert(q*s,int v)
{
    if(s->r==Max-1)
    {
        printf("full\n");
    }
    else
    {
        if(s->f==-1)
        {
            s->f=0;
        }
        s->r++;
        s->item[s->r]=v;
    }
    
}
int del(q*s)
{
    if(s->f==-1)
    {
        printf("empty\n");
    }
    else
    {
        printf("%d\n",s->item[s->f]);
        s->f++;
        
        if(s->f>s->r)
        {
            s->f=-1;
            s->r=-1;
        }
        
    }
    
} 
int dis(q*s)
{
    for(int i=s->f;i<=s->r;i++)
    {
        printf("%d ",s->item[i]);
    }
}
int main()
{
    int data;
    q*s=malloc(sizeof(q));
    create(s);
    printf("Enter the elements : \n");
    for(int i=0;i<Max;i++)
    {
        scanf("%d",&data);
        insert(s,data);
    }
    
    //printf("Delete the element : \n");
    //del(s);
    printf("Elements inside queue is : ");
    dis(s);
    printf("%s", "\U0001f600 ");
}



/*
#include <stdio.h>

#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
  return 0;
}

// Check if the queue is empty
int isEmpty() {
  if (front == -1) return 1;
  return 0;
}

// Adding an element
void insert() {
  int n;
  printf("Enter the element to be inserted/entered\n");
  scanf("%d",&n);
  if (isFull())
    printf("Queue is full\n");
  else {
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = n;
  }
}

// Removing an element
int delete() {
  int element;
  if (isEmpty()) {
    printf("Queue is empty\n");
    return (-1);
  } else {
    element = items[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
    // Q has only one element, so we reset the 
    // queue after dequeing it. ?
    else {
      front = (front + 1) % SIZE;
    }
    printf("The deleted element is %d\n", element);
    return (element);
  }
}

// Display the queue
void display() {
  int i;
  if (isEmpty())
    printf("The contents of the queue are {}\n");
  else {
    printf("The contents of the queue are ");
    for (i = front; i != rear; i = (i + 1) % SIZE) {
      printf("%d ", items[i]);
    }
    printf("%d\n", items[i]);
  }
}

void main ()  
{  
    int choice;   
    while(choice != 4)   
    {       
    printf("Choice 1 : Enter element into Queue\n");
	printf("Choice 2 : Delete element from Queue\n");
	printf("Choice 3 : Display\n");
	printf("Any other choice : Exit\n");
	printf("Enter your choice\n");
        scanf("%d",&choice);  
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
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}
*/

