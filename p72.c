// 72. Write a menu driven program to implement following operations on the doubly
// linked list.

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

// • Insert a node at the front of the linked list.
void insertAtFirst()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the info of newnode : ");
    scanf("%d", &newnode->info);
    newnode->prev = NULL;
    newnode->next = NULL;

    if (first == NULL)
    {
        first = newnode;
        last = newnode;
        return;
    }else
    {
        first->prev = newnode;
        newnode->next = first;
        first = newnode;
    }
}

// • Insert a node at the end of the linked list.
void insertAtEnd()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the info of newnode : ");
    scanf("%d", &newnode->info);
    newnode->prev = NULL;
    newnode->next = NULL;

    if (first == NULL)
    {
        first = newnode;
        last = newnode;
        return;
    }
    else
    {
            last->next = newnode;
            newnode->prev = last;
            last = newnode;
    }
}


// • Delete a node from specified position.
void deleteFromSpecificPosition() {
    int x;
    printf("Enter the info of node to delete: ");
    scanf("%d", &x);

    if (first == NULL) {
        printf("Linked list is empty...\n");
        return;
    }

    struct node *save = first;
    struct node *pred = NULL;
    
    if(save->info == x){
        first = save->next;
        first->prev = NULL;
        return;
    }
    if(last->info ==x){
        last = last->prev;
        last->next = NULL;
        return;
    }
    
    while (save != NULL && save->info != x) {
        pred = save;
        save = save->next;
    }
    pred->next = save->next;
    save->next->prev = pred;
    printf("%d %d",pred->info,save->info);
    
    if(save == last){
        pred->next = NULL;
        last = pred;
    }

    free(save);
    printf("Node deleted successfully.\n");
}

// • Display all nodes.
void display()
{
    struct node *save = first;

    if (save == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Doubly Linked List: ");
    while (save != NULL)
    {
        printf("%d ", save->info);
        save = save->next;
    }
    printf("\n");
}

void main()
{
    insertAtFirst();
    insertAtEnd();
    deleteFromSpecificPosition();
    display();
}