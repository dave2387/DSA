// 66. Write a program to sort elements of a linked list.

#include <stdio.h>
#include <stdlib.h>
void sort();
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

void sort()
{
    if (first == NULL)
    {
        printf("LL is empty");
        return;
    }
    else
    {
        struct node *save = first;
        struct node *save2 = first;
        int temp = 0;
        for (save = first; save != NULL; save = save->link)
        {
            for (save2 = first; save2->link != NULL; save2 = save2->link)
            {
                if (save2->info > save2->link->info)
                {
                    temp = save2->info;
                    save2->info = save2->link->info;
                    save2->link->info = temp;
                }
            }
        }
    }
}


void display()
{
    if (first == NULL)
    {
        printf("LL is EMPTY\n");
        return;
    }

    struct node *save = first;
    while (save != NULL)
    {
        printf("%d ", save->info);
        save = save->link;
    }
    printf("\n");
}


void main()
{

    insertAtLast();
    insertAtLast();
    insertAtLast();

    printf("Before\n");
    display();
    sort();
    printf("\nAfter\n");
    display();
}

