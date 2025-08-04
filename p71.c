#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x, y, z, coff;
    struct node *link;
};

struct node *first = NULL;
struct node *first1 = NULL;
struct node *first2 = NULL;

struct node *insertAtLast( struct node * first)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }

    printf("ENTER THE POWER OF X : ");
    scanf("%d", &newnode->x);
    printf("ENTER THE POWER OF Y : ");
    scanf("%d", &newnode->y);
    printf("ENTER THE POWER OF Z : ");
    scanf("%d", &newnode->z);
    printf("ENTER THE INFO NUMBER : ");
    scanf("%d", &newnode->coff);

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

    return first;
}

void display(struct node* first)
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
            printf("X^%d ", save->x);
            printf("Y^%d ", save->y);
            printf("Z^%d ", save->z);
            printf("%d -> ", save->coff);
            save = save->link;
        }
        printf("\n");
    }
}

void main()
{
    first1 = insertAtLast(first1);
    first1 = insertAtLast(first1);
    printf("First Expression: \n");
    display(first1);
    

    first2 = insertAtLast(first2);
    first2 = insertAtLast(first2);
    printf("\nSecond Expression: \n");
    display(first2);
}