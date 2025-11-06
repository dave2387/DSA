// Write  a  program  to  construct  a  binary  tree  from  given  Postorder  and  Preorder 
// traversal sequence. 




#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int search(int postorder[], int l, int h, int val){
    for (int i = l; i <= h; i++) {
        if (postorder[i] == val) {
            return i;
        }
    }
    return -1;
}

struct Node* constructTree(int preorder[], int postorder[], int* preIndex, int l, int h, int size){
    if (*preIndex >= size || l > h) {
        return NULL;
    }

    struct Node* root = newNode(preorder[*preIndex]);
    (*preIndex)++;

    if (l == h || *preIndex >= size) {
        return root;
    }

    int i = search(postorder, l, h, preorder[*preIndex]);

    if (i != -1) {
        root->left = constructTree(preorder, postorder, preIndex, l, i, size);
        root->right = constructTree(preorder, postorder, preIndex, i + 1, h - 1, size);
    }
    return root;
}

struct Node* constructTree(int preorder[], int postorder[], int size){
    int preIndex = 0;
    return constructTree(preorder, postorder, &preIndex, 0, size - 1, size);
}

void inorder(struct Node* root){
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main(){
    int preorder[] = {1, 2, 4, 5, 3, 6, 7};
    int postorder[] = {4, 5, 2, 6, 7, 3, 1};
    int size = sizeof(preorder) / sizeof(preorder[0]);

    struct Node* root = constructTree(preorder, postorder, size);

    printf("Inorder Traversal of constructed tree:\n");
    inorder(root);

    return 0;
}
