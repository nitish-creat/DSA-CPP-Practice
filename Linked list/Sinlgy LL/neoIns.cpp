#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string data;
    Node* next;   
};

void push(Node** head,string s){
    Node* newnode=new Node();
    newnode->data=s;
    newnode->next=*head;
    *head=newnode;
}

void append(Node** head,string new_s){
    Node* newnode=new Node();
    newnode->data=new_s;
    // newnode->next =*head;
    // *head=newnode;
    newnode->next=NULL;

    if(*head==nullptr){
        *head=newnode;
        return;
    }
    Node* temp=*head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}

void print(Node * node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}

int main() {
    Node* head=NULL;
    int n;
    cout<<"Enter how many charcter do you want : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter your "<< i+1<< " string: ";
        string str;
        cin>>str;
        push(&head,str);
    }

    string new_s;
    cout<<"Enter you new String: ";
    cin>>new_s;
    append(&head,new_s);
    print(head);
    return 0;
}