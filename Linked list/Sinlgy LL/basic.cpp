#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int d,Node* n=nullptr){  
         // these are the constructor //Now we create n is default argument
        data=d;            // it tell us about how compiler create node In 
        next= n;           //different situation
        
    }
};

Node* arrToLL(vector<int>&arr){
    if(arr.size()==0) return nullptr;
    Node* head= new Node(arr[0]);
    Node* tail= head;
    for(int i=1;i<arr.size();i++){
        tail->next=new Node(arr[i]);
        tail=tail->next;
    }
    return head;
}

void print(Node *head)
{
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* deleteHead(Node* head){
    if(head==nullptr) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
};
Node * insertHead(Node* head,int value){
    // if(head==nullptr) return head;
    Node* newNode= new Node(value);
    newNode->next=head;
    head=newNode;
    return head;
};

Node* remTail(Node* head){
    if(head==NULL || head->next==NULL) return nullptr;
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head ;
}

Node* InsTail(Node* head,int value){
    Node* newNode= new Node(value);
    if(head==nullptr){
        head = newNode;
        return head;
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}


int main() {
    vector<int> arr={2,42,24,23};
    Node *head= arrToLL(arr);
    print(head);
    // cout<<"\nHead is delete now: "<<endl;
    // head = deleteHead(head);
    // print(head);
    // cout<<"\nvalue is insert now: "<<endl;
    // head= insertHead(head,29);
    // print(head);
    cout<<"\nvalue after remove the tail"<<endl;
    head=remTail(head);
    print(head);
    // cout<<"\nvalue after insert value at tail"<<endl;
    // head=InsTail(head,48);
    // print(head);
    return 0;
}