/* A trie is non linear structure made up of nodes connected by edges it is used to represent hirerical data
a tress has root (top Node)
parent (a node above another Node)
child (a Node below another Node)
leaf Node(a Node with no children)
height of the trie ( longest path from root to leaf)


for BST (binary search trie) searching is log(n)
left Node is always a lesser node and 
right node is always a greater Node
if it is scaved tier like only root having chidren in right side or in left side (for this o(n))
*/


#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};

void printTree(Node* root,int space = 0,int gap=8){
    if(root==NULL){
        return;
    }
    space+=gap;
    printTree(root->right,space);
    cout<<endl;
    for(int i=gap;i<space;i++){
        cout<<" ";
    }
    cout<<root->data;
    printTree(root->left,space);
}
int main() {
    Node* root = new Node(10);
    root->left=new Node(20);
    root->right = new Node(30);
    root->left->left= new Node(40);
    root->left->right=new Node(20);
    root->right->left= new Node(103);
    root->right->right= new Node(203);

    printTree(root);
    return 0;
}