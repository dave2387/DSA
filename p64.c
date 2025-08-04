//  Write a program to reverse a linked list.

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
        return ;
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

void reverseLinkedList()
{
    struct node *current = NULL;
    struct node *previous = NULL;
    struct node *next = NULL;
    current = first;

    while (current != NULL)
    {
        next = current->link;
        current->link = previous;
        previous = current;
        current = next;
    }
    first = previous;
}

void display()
{
    if (first == NULL)
    {
        printf("LINK LIST IS EMPTY");
        return;
    }
    else
    {
        struct node *save = first;
        while (save != NULL)
        {
            printf("%d", save->info);
            save = save->link;
        }
    }
}

void main()
{
    insertAtLast();
    insertAtLast();
    insertAtLast();
    insertAtLast();

    printf("Before\n");
    display();
    reverseLinkedList();
    printf("\nAfter\n");
    display();
}