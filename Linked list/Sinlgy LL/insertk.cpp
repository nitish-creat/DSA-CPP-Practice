#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data,Node* next=NULL){
        this->data=data;
        this->next=next;
    }
};
Node* arrToLL(vector<int>&arr){
    if(arr.size()==0) return NULL;
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++){
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }
    return head;
}
Node* reverse(Node *head){
    Node* temp=head;
    Node* mover=NULL;
    Node* prev=NULL;
    while(temp!=NULL){
        mover=temp->next;
        temp->next=prev;
        prev=temp;
        temp=mover;
    }
    return prev;
}
Node* insertK(Node*&head,int val,int k){
    Node* newnode=new Node(val);
    if(head=NULL){
        if(k==1){
            return newnode;
        }
        delete newnode;
        return head;
    }
    if(k==1){
        newnode->next=head;
        head=newnode;
        return head;
    }
    Node* temp=head;
    int c=1;
    while(temp!=NULL && c<k-1){
        temp=temp->next;
        c++;
    }
    if(temp==NULL){
        cout<<"Invalid position :)"<<endl;
        return head;
    }
    
    newnode->next=temp->next;
    temp->next=newnode;

    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main() {
    vector<int> arr={2,42,4,24,4,5,4};
    Node* head= arrToLL(arr);
    print(head);
    cout<<endl;
    head=insertK(head,29,3);
    print(head);
    head=reverse(head);
    cout<<"\nreversed List: ";
    print(head);
    return 0;
}