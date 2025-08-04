// WAP to delete alternate nodes of a doubly linked list.

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

// void deleteAlternate(){
//     if(first == NULL){
//         printf("Linked List is empty....");
//     }

//     struct node *save = first;
//     struct node *pred = NULL;

//     while(save->next != NULL){
//         save = save->next;
//         pred = save->next->next;
//         free(save);
//         free(pred);
//     }
// }

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


void main(){
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();

    display();
    deleteAlternate();
    display();
}
