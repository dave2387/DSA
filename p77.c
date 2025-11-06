// Write a program to check whether the given tree is symmetric or not.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *left;
    struct node *right;
};

struct node *insertInTree(struct node *root, int val) {
    if (root == NULL) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->info = val;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
    if (val < root->info)
        root->left = insertInTree(root->left, val);
    else
        root->right = insertInTree(root->right, val);
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

int isMirror(struct node *root1, struct node *root2) {
    if (root1 == NULL && root2 == NULL) {
        return 1;
    }
    if (root1 == NULL || root2 == NULL) {
        return 0;
    }
    return (root1->info == root2->info) &&
           isMirror(root1->left, root2->right) &&
           isMirror(root1->right, root2->left);
}

int isSymmetric(struct node *root) {
    if (root == NULL) {
        return 1;
    }
    if (isMirror(root->left, root->right))
    {
        printf("mirror left:\n %d right:\n %d", root->left->info, root->right->info);
    } else {
        printf("not mirror left:\n %d right:\n %d", root->left->info, root->right->info);
    }
    return isMirror(root->left, root->right);
}

int main() {
    struct node *root = NULL;

    root = insertInTree(root, 8);

    root->left = (struct node *)malloc(sizeof(struct node));
    root->left->info = 5;
    root->left->left = (struct node *)malloc(sizeof(struct node));
    root->left->left->info = 3;
    root->left->right = (struct node *)malloc(sizeof(struct node));
    root->left->right->info = 6;

    root->right = (struct node *)malloc(sizeof(struct node));
    root->right->info = 5;
    root->right->left = (struct node *)malloc(sizeof(struct node));
    root->right->left->info = 6;
    root->right->right = (struct node *)malloc(sizeof(struct node));
    root->right->right->info = 3;

    // error
    isSymmetric(root);
    // printf("hiiiii");
    inOrder(root);

    return 0;
}
