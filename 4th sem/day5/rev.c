// linked list reversal
#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *link;
}node;

node *getnode()
{
    node *temp;
    temp = (node*)malloc(sizeof(node));
    return temp;
}

node *reverse(node *first)
{
    node *next,*prev = NULL,*present;
    present = first;
    next = NULL;
    while(present != NULL)
    {
        next = present->link;
        present->link = prev;
        prev = present;
        present = next;
    }

    return prev;
}

void display(node *first)
{
    node *temp;
    temp = first;
    while(temp->link != NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->link;
    }
    printf("%d",temp->data);
    printf("\n");
}

node *insert(node *first,int num)
{
    node *new = getnode();
    new->data = num;
    new->link = NULL;
    if(first == NULL)
    {
        return new;
    }
    node *temp;
    temp = first;
    while(temp->link!=NULL)
    {
        temp = temp->link;
    }
    temp->link = new;
    return first;
}

void main()
{
    node *first = NULL;
    first = insert(first,1);
    first = insert(first,2);
    first = insert(first,3);
    first = insert(first,4);
    first = insert(first,5);
    printf("before reversal : \n");
    display(first);
    first = reverse(first);
    printf("after reversal : \n");
    display(first);
    return;
}