// Middle of LL

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


int middleNode()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *save = first;
    int count = 0, x;
    while (save->link != 0)
    {
        count++;
        save = save->link;
    }
    return count;

    int middlenode = x;
    if (count % 2 == 0)
    {
        x = count / 2 + 1;
        printf("Middle node number is %d",x);
    }
    else
    {
        x = count / 2 + 0.5;
        printf("Middle node number is %d",x);
    }
}

void main(){
    insertAtLast();
    insertAtLast();
    insertAtLast();
    insertAtLast();
    insertAtLast();
    insertAtLast();

    middleNode();

}
