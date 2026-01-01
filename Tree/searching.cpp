#include <stdio.h>
#include <stdlib.h>

// BST Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create node
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert into BST
struct Node* insertBST(struct Node* root, int val) {
    if (root == NULL)
        return createNode(val);

    if (val < root->data)
        root->left = insertBST(root->left, val);
    else if (val > root->data)
        root->right = insertBST(root->right, val);

    return root;
}

// Search BST and track position (level)
struct Node* searchBST(struct Node* root, int key, int level) {

    // Case 1: Empty tree or not found
    if (root == NULL)
        return NULL;

    // Case 2: Found
    if (key == root->data) {
        printf("Element found at position (level): %d\n", level);
        return root;
    }

    // Case 3: Go left
    if (key < root->data)
        return searchBST(root->left, key, level + 1);

    // Case 4: Go right
    return searchBST(root->right, key, level + 1);
}

int main() {
    struct Node* root = NULL;

    // Create BST
    root = insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 70);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 60);
    insertBST(root, 80);

    int key;
    printf("Enter value to search: ");
    scanf("%d", &key);

    struct Node* result = searchBST(root, key, 1);

    if (result == NULL)
        printf("Element %d NOT FOUND in BST.\n", key);

    return 0;
}
