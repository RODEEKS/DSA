#include<stdio.h>                              
#include<stdlib.h>
#define MAX 10
int count=0;
struct stack
{
    int item[MAX];
    int top;
    
};
typedef struct stack st;
void create(st *s)
{
    s->top=-1;
}
int full(st *s)
{
    if(s->top==MAX-1)
    return 1;
    else
    return 0;
}
int empty(st *s)
{
    if(s->top==-1)
    return 1;
    else
    return 0;
    
}
int push(st *s, int value)
{
    if(full(s))
    {
    printf("full\n");
    }
    else
    
    {
        s->top++;
        s->item[s->top]=value;
      
    }
    count++;
}
int pop(st *s)
{
    if(empty(s))
    {
    printf("empty\n");
    }
    else
    {
        printf("%d ",s->item[s->top]);
        s->top--;
    }
    printf("\n");
    count--;
}
int print(st *s)
{
    for(int i=0;i<count;i++)
    {
     printf("%d ",s->item[i]);
     
    }printf("\n");
}
int main()
{
    int data;
    st *s=malloc(sizeof(st));
    create(s);
    int n;
    printf("Enter the stack size : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data);
        push(s,data);
    }
    printf("pushed : ");
    print(s);
    
    printf("popped : ");
    pop(s);
    printf("Elements inside stack are : ");
    print(s);
    printf("%s", "\U0001f600 ");
}
