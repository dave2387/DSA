// // Write a program to implement queue using singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node

{
    int info;
    struct node *link;
};

struct node *first = NULL;

void push()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("ENTER THE INFO NUMBER : ");
    scanf("%d", &newnode->info);
    newnode->link = NULL;

    if (first == NULL)
    {
        first = newnode;
    }
    else
    {
        struct node *save = first;
        while (save->link != NULL)
        {
            save = save->link;
        }
        save->link = newnode;
    }
}

void pop()
{
    if (first == NULL)
    {
        printf("Queue Underflow: Nothing to delete\n");
        return;
    }

    struct node *save = first;
    first = first->link;
    free(save);
}

void display()
{
    if (first == NULL)
    {
        printf("Queue is EMPTY\n");
        return;
    }

    struct node *save = first;
    printf("Queue elements:\n");
    while (save != NULL)
    {
        printf("%d ", save->info);
        save = save->link;
    }
    printf("\n");
}

void main()
{
    push();
    push();
    push();
    push();

    pop();
    display();
    
}