#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int d,Node* n=nullptr){
        data = d;
        next =n;
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

void print(Node * head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* InsK(Node* head,int k,int value){
    if(head==nullptr){
        if(k==1){
            return new Node(value);
        }
        else{
            return head;
        }
    }

    Node* newnode= new Node(value);
    if(k==1){
        newnode->next=head;
        head=newnode;
        return newnode;
    }

    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k-1){
            Node * x= new Node(value,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}

Node* change(Node*head,int ch,int value){
    Node*temp= head;
    while(temp!=nullptr){
        if(temp->data==ch){
            temp->data=value;
        }
        temp=temp->next;
    }
    return head;
}

int findLength(Node* head){
    int c=0;
    while(head!=NULL){
        c++;
        head=head->next;
    }
    return c;
}
int main() {
    vector<int> arr={2,42,4,24,4,5,4};
    Node* head=arrToLL(arr);
    // head=InsK(head,3,22);
    // print(head);
    cout<<"Element after the changing: ";
    head= change(head,4,49);
    print(head);
    int lenght =findLength(head);
    cout<<endl;
    cout<<lenght;
    return 0;
}