//  WAP to remove duplicate elements from a singly linked list.

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
    int n;
    printf("How many input do you want....? ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the info :");
        scanf("%d", &newnode->info);
    }
    newnode->link = NULL;

    if (first == NULL)
    {
        first = newnode;
        return;
    }
    else
    {
        struct node *save1 = first;
        while (save1->link != NULL)
        {
            save1 = save1->link;
        }
        save1->link = newnode;
    }
}

void removeDuplicate()
{
    struct node *save1 = first;
    while (save1 != NULL && save1->link != NULL)
    {
        struct node *save2 = save1;
        while (save2->link != NULL)
        {
            if (save2->link->info == save1->info)
            {
                struct node *temp = save2->link;
                save2 = save2->link->link;
                save1->link = save2;
                free(temp);
            }
            else
            {
                save2 = save2->link;
            }
        }
        save1 = save1->link;
    }
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
        struct node *save1 = first;
        while (save1 != NULL)
        {
            printf("%d", save1->info);
            save1 = save1->link;
        }
    }
}

void main()
{
    insertAtLast();

    removeDuplicate();
    display();
}