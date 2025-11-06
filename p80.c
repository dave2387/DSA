// 80. WAP to find the smallest and largest elements in the Binary Search Tree. 

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

void findSmallest(struct node* root) {
    if (root == NULL) {
        printf("Tree is empty.\n");
        return;
    }
    while (root->left != NULL) {
        root = root->left;
    }
    printf("Smallest element: %d\n", root->info);
}

void findLargest(struct node* root) {
    if (root == NULL) {
        printf("Tree is empty.\n");
        return;
    }
    while (root->right != NULL) {
        root = root->right;
    }
    printf("Largest element: %d\n", root->info);
}

int main() {
    struct node *root = NULL;

    root = insertInTree(root, 20);
    root = insertInTree(root, 50);
    root = insertInTree(root, 65);
    root = insertInTree(root, 11);
    root = insertInTree(root, 78);

    findSmallest(root);
    findLargest(root);

    return 0;
}