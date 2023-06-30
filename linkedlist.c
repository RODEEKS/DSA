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