// Write a program to implement stack using singly linked list. 

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

void push(){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
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

void pop(){
     if (first == NULL) {
        printf("Stack underflow\n");
        return;
    }
    struct node* temp = first;
    first = first->link;
    free(temp);
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
        struct node *save = first;
        while (save != NULL)
        {
            printf("%d\n", save->info);
            save = save->link;
        }
    }
}

void main(){

    push();
    push();
    push();
    push();

    pop();
    display();
}