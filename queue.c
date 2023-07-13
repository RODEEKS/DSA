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
        printf("%d\n",s->item[i]);
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
    
    printf("Delete the element : \n");
    del(s);
    dis(s);
    printf("%s", "\U0001f600 ");
}


