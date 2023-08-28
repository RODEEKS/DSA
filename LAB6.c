//Given a linkded list and a data N,write a function that returns the Nth node from the end of the linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert(int v){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=v;
    newnode->next=NULL;
    if(head==NULL)
    head=newnode;
    else{
        struct node *t=head;
        while(t->next!=NULL)
            t=t->next;
        t->next=newnode;
    }
}
int print_Nth_node(int n){
    int c=0;
    struct node *t=head;
    while(t!=NULL){
        t=t->next;
        c++;
    }
    n=c-n;
    t=head;
    while(n>0){
        t=t->next;
        n--;
    }
    return t->data;
}
int main(){
    printf("Enter the data and enter -1  to exit\n");
    while(1){
        int a;
        scanf("%d",&a);
        if(a<0)
            break;
        insert(a);
    }
    int N;
    printf("Enter the Nth node\n");
    scanf("%d",&N);
    int ans=print_Nth_node(N);
    printf("Data in the %dth node from end is %d",N,ans);
    return 0;
}
