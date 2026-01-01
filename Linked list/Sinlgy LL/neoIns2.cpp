#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void sortIns(Node** head,int val){
    Node* newnode=new Node();
    newnode->data=val;
    newnode->next = nullptr;

    if(*head== nullptr || (*head)->data > newnode->data){
        newnode->next=*head;
        *head=newnode;
        return ;
    }
    Node* temp=*head;

    while(temp->next!=NULL && temp->next->data < newnode->data){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}

void print(Node*head){
    while(head!=nullptr){
        cout <<head->data<<" ";
        head=head->next;
    }
}

void length(Node*head){
    int c=0;
    while(head!=nullptr){
        c++;
        head=head->next;
    }
    cout<<"Length of this is: "<<c;
}
int main() {
    Node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cout<<"enter the num at "<<i+1<<": ";
        cin>>d;
        sortIns(&head,d);
    }

    int new_d;
    cin>>new_d;
    sortIns(&head,new_d);
    print(head);
    cout<<endl;
    length(head);
    return 0;
}