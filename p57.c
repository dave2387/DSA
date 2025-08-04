#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

// Insert a node at the front of the linked list.
void insertAtFirst()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    printf("ENTER THE INFO NUMBER : ");
    scanf("%d", &newnode->info);
    newnode->link = first;
    first = newnode;
}

// Insert a node at the end of the linked list
void insertAtLast()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return ;
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


// Delete a first node of the linked list.
void deleteFromFirst()
{
    struct node *save;
    save = first;
    if (save == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    else
    {
        save = save->link;
        save->link = first;
        free(save);
    }
}

// Delete a last node of the linked list.
void deleteFromLast()
{
    struct node *save;
    save = first;
    if (save == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    if (save->link == NULL)
    {
        free(save);
        first = NULL;
        return;
    }
    else
    {
        while (save->link != NULL)
        {
            save = save->link;
        }
        free(save);
    }
}



// Delete a node from specified position.
void deleteFromSpecificPosition()
{
    int x;
    printf("INFO OF NODE WHICH YOU WANT TO DELET : ");
    scanf("%d",&x);
    
    if (first == NULL)
    {
        printf("LINK LIST IS EMPTY");
        return;
    }
    struct node *save = first;
    struct node *pred = NULL;
    
    if (first->info == x)
    {
        first = first->link;
        free(save);
        return;
    }
    while(save != NULL && save->info != x){
        pred = save;
        save = save->link;
    }
    if(save == NULL){
        printf("NODE NOT FOUND...!!");
        return;
    }
    pred->link = save->link;
    free(save);
    return;
}

int countnode(){ 
    struct node *save;
    save = first;
    int count=0;
    if (first == NULL)
    {
        return 0;
    }
    else{
          while (save->link != NULL)
        {
            count++;
            save = save->link;
        }
        return count;
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
            printf("%d", save->info);
            save = save->link;
        }
    }
}

void main()
{
    insertAtFirst();
    insertAtLast();
    deleteFromFirst();
    deleteFromLast();
    int x= countnode();
    printf("%d",x);
    deleteFromSpecificPosition();
    display();
}