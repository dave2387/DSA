#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
};

struct node *first = NULL;
struct node *last = NULL;

struct node *insertInTree()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    int x;
    printf("Enter info of new node (-1 for exit)");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    newnode->info = x;
    printf("Enter the left child\n %d", x);
    newnode->prev = insertInTree();

    printf("Enter the right child\n %d", x);
    newnode->next = insertInTree();
    
    return newnode;
}

void main()
{
    struct node *root;
    root = 0;
    root = insertInTree();
}