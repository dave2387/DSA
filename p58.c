// WAP to check whether 2 singly linked lists are same or not.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first1 = NULL;
struct node *first2 = NULL;

void insertAtLast(struct node **first)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->link = NULL;
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    printf("ENTER THE INFO NUMBER : ");
    scanf("%d", &newnode->info);
    if (*first == NULL)
    {
        newnode->link = NULL;
        *first = newnode;
    }
    else
    {
        struct node *save = *first;
        while (save->link != NULL)
        {
            save = save->link;
        }
        save->link = newnode;
    }
}

void compare(struct node *first1, struct node *first2)
{
    struct node *save1 = first1;
    struct node *save2 = first2;
    while (save1 != NULL && save2 != NULL)
    {
        if (save1->info != save2->info)
        {
            printf("Given LL are not same\n");
            return;
        }
        save1 = save1->link;
        save2 = save2->link;
    }

    if (save1 == NULL && save2 == NULL)
    {
        printf("GIVEN TWO LL ARE SAME\n");
    }
    else
    {
        printf("Given LL are not same\n");
    }
}

int main()
{
    insertAtLast(&first1);
    insertAtLast(&first1);
    insertAtLast(&first1);
    
    insertAtLast(&first2);
    insertAtLast(&first2);
    insertAtLast(&first2);

    compare(first1, first2);
}
