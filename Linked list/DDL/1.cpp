#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node*prev;
    public:
    Node(int d,Node*n=NULL,Node*p=NULL){
        data=d;
        next=n;
        prev=p;
    }
};

Node *arrToDLL(vector<int>& arr) {
    if (arr.size() == 0)
        return NULL;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->prev = prev;   // FIXED
        prev = temp;
    }
    return head;
}


void print(Node* head){
    int i=1;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
//DELETE THE TAIL

Node* deleteTail(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* tail=head;
    while(tail->next->next!=NULL){
        tail=tail->next;
    }
    // Node* update= tail->prev;
    // update->next=NULL;
    tail->next=tail->next->next;
    delete tail->next;
    return head;
}
int main() {
    vector<int> arr={2,45,124,532,3};
    Node* head=arrToDLL(arr);
    cout<<"Original list: "<<endl;
    print(head);
    cout <<endl;
    cout<<"delete Tail list: ";
    head=deleteTail(head);
    print(head);
    return 0;
}