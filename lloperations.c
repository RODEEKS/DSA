#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
};

void printlist(struct node *head)
{
    printf("H->");
    while(head)
    {
        printf("%d->",head->val);
        head=head->next;
    }
    printf(".....");
}

void insertfront(struct node **head,int value)
{
    struct node * newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("out of memory");
    }
    newnode->val=value;
    newnode->next=*head;
    *head=newnode;
}

void insertend(struct node **head,int value)
{
    struct node * newnode=NULL;
    struct node * last=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("out of memeory");
    }
    newnode->val=value;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
    last=*head;
    while (last->next) 
        last = last->next;
        last->next=newnode;
}

int main()
{
    int count=0;
    int val;
    int i;
    struct node* head=NULL;
    printf("enter the number of elements : ");
    scanf("%d",&count); //3
    for(i=0;i<count;i++)
    {
        printf("enter the %dth element : ",i);
        scanf("%d",&val); //10 
        insertfront(&head,val);
    }

    printf("enter the  list : ");
    printlist(head);
    printf("\nenter front ele : ");
    scanf("%d",&val);
    insertfront(&head,val);
    printf("ele after inserting at begining : ");
    printlist(head);
    printf("\nenter the last ele : ");
    scanf("%d",&val);
    insertend(&head,val);
    printf("ele after inserting at end : ");
    printlist(head);

    printf("%s", "\U0001f631 ");
    printf("%s", "\U0001f631 ");
    printf("%s", "\U0001f631 ");
    
}



// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int value;
//     struct node *next;
// };

//     struct node *head=NULL;
//     struct node *tail=NULL; 

// void printlist(struct node *p)
// {
//     printf("Elements in list are : ");
//     while(p)
//     {
//         printf("%d ", p->value);
//         p = p->next;
//     }
// }
// void insert(int n)
// {
//     struct node *newnode=NULL;
//     newnode=(struct node *)malloc(sizeof(struct node));
//     if(head==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//     }
//     else
//     {
//         tail->next=newnode;
//         tail=newnode;
//     }
//     newnode->value=n;
//     newnode->next=NULL;
// }

// int main()
// {
//     printf("Enter n : ");
//     while(1)
//     {
//         int n;
//         scanf("%d", &n);
//         if(n<0)
//             break;
//         insert(n);
//     }
//     printlist(head);
//     return 0;
// }
