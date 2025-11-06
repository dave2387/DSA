// 76. Write a program to check whether the given two trees are same or not.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *left;
    struct node *right;
};

struct node *root1 = NULL;
struct node *root2 = NULL;

struct node *insertInTree(struct node *root, int val)
{
    if (root == NULL)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->info = val;
        newnode->left = NULL;
        newnode->right = NULL;
        root = newnode;
    }
    else if (val < root->info)
    {
        root->left = insertInTree(root->left, val);
    }
    else
    {
        root->right = insertInTree(root->right, val);
    }
    return root;
}


void inOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    printf("%d ", root->info);
    inOrder(root->right);
}

int isSame(struct node *root1 , struct node *root2){
    if(root1 == NULL && root2 == NULL){
        return 1;
    }
    else if(root1 == NULL || root2 == NULL){
        return 0;
    }

    return (root1->info == root2->info) && 
        isSame(root1->left , root2->left)&&
        isSame(root1->right , root2->right);
}

int main()
{
    root1 = insertInTree(root1, 2);
    root1 = insertInTree(root1, 3);
    root1 = insertInTree(root1, 7);
    root1 = insertInTree(root1, 9);

    root2 = insertInTree(root2, 2);
    root2 = insertInTree(root2, 8);
    root2 = insertInTree(root2, 7);
    root2 = insertInTree(root2, 9);

    inOrder(root1);
    printf("\n");
    inOrder(root2);

    if(isSame(root1 , root2)){
        printf("Are same");
    }else{
        printf("\nNot same");
    }  
    return 0;  
}
