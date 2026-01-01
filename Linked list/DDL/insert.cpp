#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    Node(int d,Node*p=NULL,Node*n=NULL){
        data=d;
        prev=p;
        next=n;
    }
};

Node* arrtoDLL(vector<int>&arr){
    if(arr.empty()) return NULL;
    Node*head= new Node(arr[0]);
    Node* prev=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],prev,NULL);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* insertN(Node* head,int v,int p){
    Node * newnode=new Node(v);
    if(p==1){
        newnode->next=head;
        if(head) head->prev=newnode;
        head=newnode;
        return head;
    }

    Node* temp=head;
    int c=1;
    while(temp!=NULL && c<p-1){
        temp=temp->next;
        c++;
    }

    if(temp ==NULL){
        cout<<"Na bhai na galat";
        delete newnode;
        // return head;
    }

    newnode->next=temp->next;
    newnode->prev=temp ;
    if(temp->next!=NULL){
        temp->next->prev=newnode;
    }
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
    vector<int>arr={2,42,4,2,45,2};
    Node* head=arrtoDLL(arr);
    cout<<"original arr: "<<endl;
    print(head);
    cout<<"\nafter insertion arr: "<<endl;
    head=insertN(head,29,89);
    print(head);
    return 0;
}