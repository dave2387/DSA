// 69. Write a menu driven program to implement following operations on the circular
// linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

// • Insert a node at the front of the linked list.
void insertAtFirst()
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
        first = newnode;
    }
}

// • Insert a node at the end of the linked list.
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

// • Delete a node from specified position.
void deleteFromSpecificPosition()
{

    int x;
    printf("ENTER THE INFO NUMBER TO DELETE NODE : ");
    scanf("%d", &x);

    if (first == NULL)
    {
        printf("LINKED LIST IS EMPTY.....!!!!");
    }

    struct node *save = first;
    struct node *pred = NULL;
     

    while (save->info != x && save!=NULL)
    {
        pred = save;
        save = save->link;
    }
    if (save == NULL)
    {
        printf("NODE NOT FOUND...!!\n");
        return;
    }

    if (save == first)
    {
        first = first->link;
        free(save);
    }
    else
    {
        pred->link = save->link;
        free(save);
    }
}


// • Display all nodes of circular linked list. 
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
        printf("%d->", save->info);
        save = save->link;

        while (save != first)
        {
            printf("%d->", save->info);
            save = save->link;
        }
        printf("\n");
    }
}

void main()
{
    insertAtFirst();
    insertAtFirst();
    insertAtFirst();
    // insertAtLast();
    // deleteFromSpecificPosition();
    
    display();
}