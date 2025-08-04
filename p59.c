// Write a program to remove the duplicates nodes from given sorted Linked List.
// • Input: 1 → 1 → 6 → 13 → 13 → 13 → 27 → 27
// • Output: 1 → 6 → 13 → 27

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

// Insert a node at the end of the linked list
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
        return;
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

void removeDuplicate()
{
    struct node *save = first;

    while (save !=NULL)
    {
        if (save->info == save->link->info)
        {
            save->link = save->link->link;
        }
        save = save->link ;
    }
}

// Display all nodes.
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
            printf("%d->", save->info);
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
    insertAtLast();
    insertAtLast();

    printf("BEFORE\n");
    display();
    removeDuplicate();
    printf("\nAFTER\n");
    display();
}