//  WAP to swap Kth node from beginning with Kth node from end in a singly linked list.

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

void swapNode()
{
    int n;
    printf("Enter the number of node to swap");
    scanf("%d",&n);
    struct node *save = first;
    struct node *pred1 = NULL;
    struct node *pred2 = NULL;
    struct node *next = NULL;
    for (int i = 0; i < n; i++)
    {
        pred1 = save;
        save = save->link;
    }
        save->link = NULL;
        pred1->link = NULL;
    struct node *newSave = first;
    struct node *temp = first;
    while (temp != NULL)
    {
        pred2 = temp;
        save->link = NULL;
    }
    pred1->link = newSave;
    newSave->link = save->link;
    pred2->link = save;
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
            printf("%d ->", save->info);
            save = save->link;
        }
    }
}

void main()
{

    insertAtLast();
    insertAtLast();
    insertAtLast();

    swapNode();

    display();
}