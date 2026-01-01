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

// Insert BST (to build tree)
struct Node* insertBST(struct Node* root, int val) {
    if (root == NULL)
        return createNode(val);

    if (val < root->data)
        root->left = insertBST(root->left, val);
    else if (val > root->data)
        root->right = insertBST(root->right, val);

    return root;
}

// Find inorder successor (minimum value node)
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;

    while (current && current->left != NULL)
        current = current->left;

    return current;
}

// Delete node from BST (ALL CASES)
struct Node* deleteBST(struct Node* root, int key) {

    // Case: Empty tree
    if (root == NULL)
        return root;

    // Traverse to find node
    if (key < root->data)
        root->left = deleteBST(root->left, key);

    else if (key > root->data)
        root->right = deleteBST(root->right, key);

    // Node found
    else {

        // CASE 1 & CASE 2: node has 0 or 1 child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // CASE 3: node has 2 children
        struct Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }

    return root;
}

// Inorder traversal (to verify)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;

    // Build BST
    root = insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 70);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 60);
    insertBST(root, 80);

    printf("Inorder before deletion:\n");
    inorder(root);

    root = deleteBST(root, 20);  // Case 1
    root = deleteBST(root, 30);  // Case 2
    root = deleteBST(root, 50);  // Case 3

    printf("\n\nInorder after deletion:\n");
    inorder(root);

    return 0;
}
