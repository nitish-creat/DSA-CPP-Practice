#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node* left;
    Node* right;
    int data;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == nullptr) return new Node(val);

    if (val < root->data) {
        root->left = insert(root->left, val);
    }
    else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void printTree(Node* root, int space = 0, int gap = 8) {
    if (root == NULL) return;

    space += gap;
    printTree(root->right, space);

    cout << endl;
    for (int i = gap; i < space; i++) cout << " ";
    cout << root->data;

    printTree(root->left, space);
}

int main() {
    Node* root = nullptr;
    int n, val;

    cout << "Enter the number of Nodes: ";
    cin >> n;

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "Inorder: ";
    inorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nBinary Search Tree: ";
    printTree(root);

    return 0;
}
