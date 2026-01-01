#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int d){
        data= d;
        left=NULL;
        right=NULL;
    }
};

bool searchInBST(Node* root,int d){
    if(root == NULL){
        return false;
    }
    if(root->data==d){
        return true;
    }
    if(root->data > d){
        return searchInBST(root->left,d);
    }
    else{
        return searchInBST(root->right , d);
    }
}

Node*insertIntoBST(Node*root, int d){
    if(root==NULL){
        root = new Node(d);
        return root;
    }
    if(d> root->data){
        root->right = insertIntoBST(root->right,d);
    }
    else{
        root->left= insertIntoBST(root->left,d);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}
void levelOrder(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        if (curr == NULL) {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else {
            cout << curr->data << " ";
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void Preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* min(Node*root){
    Node * temp= root;
    while(temp->left !=NULL){
        temp = temp->left;
    }

    return temp;
}

Node* max(Node*root){
    Node * temp= root;
    while(temp->right !=NULL){
        temp = temp->right;
    }

    return temp;
}

Node* deleteFromBSt(Node* root, int d){
    if(root == NULL) return NULL;
    
    if(root->data == d){
        //   HAVING 0 CHILD
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // HAVING 1 CHILD
            // (IF RIGHT NODE IS NULL)
        if(root->left != NULL && root->right ==NULL){
            Node* temp= root->left;
            delete root;
            return temp;
        }
            // (IF LEFT NODE IS NULL)
        if(root->right != NULL && root->left ==NULL){
            Node* temp= root->right;
            delete root;
            return temp;
        }
        // HAVING 2 CHILD
        if(root->left !=NULL && root->right !=NULL){
            Node* minV = min(root->right);
            root->data= minV->data;
            root->right = deleteFromBSt(root->right,minV->data);
            return root;
        }
    }

    if(root->data > d){
        root->left=deleteFromBSt(root->left,d);
        return root;
    }
    else{
        root->right= deleteFromBSt(root->right,d);
        return root;
    }
}


int main() {
    Node* root=NULL;
    cout<<"Enter the data into the tree and if you want to quit just type -1: "<<endl;
    takeInput(root);
    cout<<"\nthis the BST of your input: "<<endl;
    levelOrder(root);
    // cout<<"\nthis is the Inorder Traversal: ";
    // inorder(root);
    // cout<<"\nthis is the preOrder Traversal: ";
    // Preorder(root);
    // cout<<"\nthis is the Postorder Traversal: ";
    // postorder(root);
    // cout<<endl;

    // bool check=searchInBST(root,99);
    // cout<<check<<endl;
    // cout<<"Min element: "<<min(root)->data<<endl;
    // cout<<"Max element: "<<max(root)->data<<endl;
    cout<<endl;
    cout<<endl;
    deleteFromBSt(root,10);
    levelOrder(root);
    cout<<endl;
    inorder(root);
    return 0;
}