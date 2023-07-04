							LINKED LIST

A linked list is a linear data structure that includes a series of connected nodes.
Here, each node stores the data and the address of the next node.
Types of Linked List - 
1.Singly linked
2.doubly linked and
3.circular linked

1.Singly Linked List : 
It is the most common. Each node has data and a pointer to the next node.
2.Doubly Linked List
We add a pointer to the previous node in a doubly-linked list. Thus, we can go in either direction: forward or backward.
3.Circular Linked List
A circular linked list is a variation of a linked list in which the last element is linked to the first element. 
This forms a circular loop.
    
SAMPLE CODE :-
    
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void printlist(struct node *p)
{
    while(p!=NULL)
    {
        printf("Elements in the list are %d ",p->data);
        p=p->next;
    }
}

int main()
{
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));

    one->data=10;
    two->data=22;
    three->data=3423;

    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;
    printlist(head);
    printf("%s", "\U0001f631 ");
}
