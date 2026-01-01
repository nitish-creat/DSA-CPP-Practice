#include <bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node *next;
};
int main() {
    node*head=new node();
    node*sec=new node();
    node*third=new node();

    head->data=10;
    sec->data=23;
    third->data=40;

    head->next=sec;
    sec->next=third;
    third->next=NULL;

    node *temp=head;
    cout<<"Linked list: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}