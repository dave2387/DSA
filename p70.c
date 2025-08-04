// WAP to split a circular linked list into two halves.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertAtLast()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    printf("ENTER THE INFO NUMBER : ");
    scanf("%d", &newnode->info);

    struct node *last = first;
    if (first == NULL)
    {
        newnode->link = newnode;
        first = newnode;
    }
    else
    {
        while (last->link != first)
        {
            last = last->link;
        }
        newnode->link = first;
        last->link = newnode;
        last = newnode;
    }
}

struct node* splitList()
{
    struct node *save1 = first;
    struct node *save2 = first;
    struct node *next = NULL;

    while(save2->link != first && save2->link->link != first){
        save1 = save1->link;
        save2 = save2->link->link;
    }
    next = save1->link;
    save1->link = first;
    save2 = save2->link;
    save2->link = next;
    return next;
}

void display(struct node *first)
{
    if (first == NULL)
    {
        printf("LIST IS EMPTY\n");
        return;
    }

    struct node *save = first;
    do
    {
        printf("%d -> ", save->info);
        save = save->link;
    } while (save != first);
    printf("(back to start)\n");
}

void main()
{
    insertAtLast();
    insertAtLast();
    insertAtLast();
    insertAtLast();
    insertAtLast();
    insertAtLast();

    struct node* secondHalf = splitList();
    display(first);
    display(secondHalf);
}
