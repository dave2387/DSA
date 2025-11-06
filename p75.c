// Write a menu driven program to implement Binary Search Tree (BST) & perform
// following operations:
// • Insert a node
// • Delete a node
// • Search a node
// • Preorder Traversal
// • Postorder Traversal
// • Inorder Traversal

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

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

struct node *searchNode(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->info == key)
    {
        return root;
    }
    else if (key < root->info)
    {
        return searchNode(root->left, key);
    }
    else
    {
        return searchNode(root->right, key);
    }
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

void preOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->info);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->info);
}

struct node *findMin(struct node *root)
{
    while (root && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

struct node *deleteTree(struct node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->info > val)
    {
        root->left = deleteTree(root->left, val);
    }
    else if (root->info < val)
    {
        root->right = deleteTree(root->right, val);
    }
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            struct node *temp = findMin(root->right);
            root->info = temp->info;
            root->right = deleteTree(root->right, temp->info);
        }
    }
    return root;
}

void main()
{
    root = insertInTree(root, 3);
    root = insertInTree(root, 2);
    root = insertInTree(root, 4);
    root = insertInTree(root, 5);
    root = insertInTree(root, 11);
    root = insertInTree(root, 7);
 
    deleteTree(root, 4);

    printf("Inorder Traversal of given tree\n");
    inOrder(root);
    printf("\nPreorder Traversal of given tree\n");
    preOrder(root);
    printf("\nPostorder Traversal of given tree\n");
    postOrder(root);
}