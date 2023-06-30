#include<stdio.h>
#include<stdlib.h>
struct node
{
    int *a;
};

struct node *n=NULL;
int i=0;

void insert(struct node *n,int j)
{
    n->a[i]=j;
    i++;
}

int main()
{
    n=(struct node*)malloc(sizeof(struct node));
    int k;
    while(1)
    {
        scanf("%d",&k);
        if(k<0)
        break;
        insert(n,k);
    }

    int z=0;
    while(z<i)
    {
        printf(" %d->",n->a[z]);
        z++;
    }
}
