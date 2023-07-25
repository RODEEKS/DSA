/*This C program performs searching using self-organizing lists.

A self-organizing list is a list that reorders its elements based on some self-organizing heuristic to improve average access time. 
The aim of a self-organizing list is to improve efficiency of linear search by moving more frequently accessed items towards the head of the list. 
A self-organizing list achieves near constant time for element access in the best case.
A self-organizing list uses a reorganizing algorithm to adapt to various query distributions at runtime.

Here is the source code of the C program to search using Self-Organizing Lists. 
The C program is successfully compiled and run on a Linux system. 
*/
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    char info;
    struct node *next;
};
struct node *start = NULL;
struct node * create_node(char value)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node*));
    if (temp == NULL)
    {
        printf("\nMemory NOT allocated! \n");
        return 0;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
 
        return temp;
    }
}
void delete_pos(int pos)
{
    int i, key = 0;;
    if (start == NULL)
    {
        return;
    }
    struct node *s, *ptr;
    s = start;
    if (pos == 1)
    {
        start = s->next;
    }
    else
    {
        while (s != NULL)
        {
            s = s->next;
            key++;
        }
        if (pos > 0 && pos <= key)
        {
            s = start;
            for (i = 1;i < pos;i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        free(s);
    }
}
 
void insert_last(char value)
{
    struct node  *s;
    struct node *temp = create_node(value);
    if (start == NULL)
    {
        start = temp;
        printf("Start has been initialized\n");
        return;
    }
    s = start;
    while (s->next != NULL)
    {
        s = s->next;
    }
    temp->next = NULL;
    s->next = temp;
    printf("Element inserted\n");
}
 
int search(char value)
{
    int pos = 0;
    int flag = 0;
    if (start == NULL)
    {
        return 0;
    }
    struct node *s;
    s = start;
    while (s != NULL)
    {
        pos++;
        if (s->info == value)
        {
            flag = 1;
            return pos;
        }
        s = s->next;
    }
    if (!flag)
        return 0;
}
void move_to_front(char value)
{
    int pos;
    if (start == NULL)
    {
        printf("List is Empty, first create the list\n");
        return;
    }
    pos = search(value);
    if (pos)
    {
        delete_pos(pos);
        insert_begin(value);
    }
    else
        printf("\nElement not found!! \n");
    display();
 
}
void insert_begin(char value)
{
    struct node *temp, *p;
    temp = create_node(value);
    if (start == NULL)
    {
        start = temp;
        start->next = NULL;
    }
    else
    {
        p = start;
        start = temp;
        start->next = p;
    }
}
void display()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("List is Empty, nothing to display \n");
        return;
    }
    temp = start;
    while (temp != NULL)
    {
        printf("%c->", temp->info);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int position, choice;
    char element;
    do
    {
        printf("Operations on Self Organising list: ");
        printf("\n1. Insert Node: ");
        printf("\n2. Delete a particular node: ");
        printf("\n3. Search a node: ");
        printf("\n4. Display list: ");
        printf("\n5. Exit \n\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("\nEnter an element: ");
                scanf(" %c", &element);
                insert_last(element);
                break;
            case 2:
                printf("\nEnter position where you want to delete: ");
                scanf("%d", &position);
                delete_pos(position);
                break;
            case 3:
                printf("\nEnter a character element to search: ");
                scanf(" %c", &element);
                move_to_front(element);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("\nExiting . . . "\n");
                return 0;
            default:
                printf("Enter a valid choice: ");
                scanf("%d", &choice);
        }
    }
    while(choice);
    return 0;
 
}
