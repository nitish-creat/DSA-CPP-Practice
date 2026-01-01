#include <stdio.h>
#include <stdlib.h>

#define COUNT 4
// BST Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new node
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a value into BST
struct Node* insertBST(struct Node* root, int val) {
    // Case 1: Empty tree or correct position found
    if (root == NULL)
        return createNode(val);

    // Case 2: Move to left subtree
    if (val < root->data)
        root->left = insertBST(root->left, val);

    // Case 3: Move to right subtree
    else if (val > root->data)
        root->right = insertBST(root->right, val);

    // Duplicate values are ignored
    return root;
}

// Inorder traversal (to verify BST)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void printTree(struct Node* root, int space) {
    if (root == NULL)
        return;

    // Increase distance between levels
    space += COUNT;

    // Print right child first
    printTree(root->right, space);

    // Print current node after space
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);

    // Print left child
    printTree(root->left, space);
}

int main() {
    struct Node* root = NULL;

    // Insert elements
    root = insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 70);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 60);
    insertBST(root, 80);

    printf("Inorder Traversal of BST:\n");
    inorder(root);
    printf("Pre-Order Traversal of BST:\n");
    preorder(root);
    printf("Post-Order Traversal of BST:\n");
    postorder(root);
    printf("Tree Structure: \n");
    printTree(root,0);
    return 0;
}
