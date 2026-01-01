#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    Node *next;

};

int main() {
    Node* head=NULL;
    Node* temp=NULL;
    Node* newNode=NULL;

    int n,value;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element at: "<<i+1<<endl;
        cin>>value;

        newNode= new Node();
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            temp=head;
        }
        else{
            temp->next=newNode;
            temp=temp->next;
        }
    }

    cout<<"Linked List: ";
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}