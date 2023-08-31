#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
    int data;
    struct node *next;
};
struct node *head1=NULL;       //list 1
struct node *head2=NULL;       //list 2
struct node *head3=NULL;       //list 3
void insertlist1(int d){
    struct node *nn=(struct node *)malloc(sizeof(struct node));
    nn->data=d;
    nn->next=NULL;
    if(head1==NULL){
        head1=nn;
    }
    else{
        struct node *t=head1;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=nn;
    }
}
void insertlist2(int d){
    struct node *nn=(struct node *)malloc(sizeof(struct node));
    nn->data=d;
    nn->next=NULL;
    if(head2==NULL){
        head2=nn;
    }
    else{
        struct node *t=head2;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=nn;
    }
}
void insertlist3(int d){
    struct node *nn=(struct node *)malloc(sizeof(struct node));
    nn->data=d;
    nn->next=NULL;
    if(head3==NULL){
        head3=nn;
    }
    else{
        struct node *t=head3;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=nn;
    }
}
void merge(){
    struct node *t1=head1;
    struct node *t2=head2;
    struct node *t3=head3;
    while(t1!=NULL && t2!=NULL ){
       // printf("a\n");
    if(t1->data<t2->data){
         insertlist3(t1->data);
         t1=t1->next;
    }
    else{
        insertlist3(t2->data);
         t2=t2->next;
    }
         
    }
    while(t1!=NULL){
        insertlist3(t1->data);
        t1=t1->next;
    }
    while(t2!=NULL){
        insertlist3(t2->data);
        t2=t2->next;
    }
}
void print(){
    struct node *t=head3;
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->next;
    }
    printf("\n");
}
int main(){
    int a;
    printf("Enter the list 1 values,press -1 to exit:\n");
    while(true){
        scanf("%d",&a);
        if(a<0)
        break;
        insertlist1(a);
    }
    printf("Enter the list 2 values,press -1 to exit:\n");
    while(true){
        scanf("%d",&a);
        if(a<0)
        break;
        insertlist2(a);
    }
    printf("Elements of list 3 after merging:-\n");
    merge();
    print();
}
