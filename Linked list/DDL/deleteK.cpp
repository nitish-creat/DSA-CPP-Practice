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

Node* deleteK(Node*head,int n){
    if(head==NULL) return NULL;
    Node*temp=head;
    int c=1;
    while(temp!=NULL && c<n){
        temp =temp->next;
        c++;
    }
    if(temp==NULL){
        cout<<"this is out of the range :)";
        return head;
    }
    
    if(temp->prev==NULL){
        head=temp->next;
        if(head) head->prev=NULL;
        delete temp;
        return head;
    }

    Node*before=temp->prev;
    Node*after=temp->next;

    before->next=after;
    if(after!=NULL) after->prev=before;

    delete temp;
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

// DELETE NODE

Node* deleteN(Node*head,Node* n){
    if(head==nullptr || n==nullptr){
        return head;
    }

    if(head==n){
        head=head->next;
        if(head!=NULL){
            head->prev=nullptr;
        }
        delete n;
        return head;
    }

    Node* before=n->prev;
    Node*after=n->next;
    if(before!=nullptr){
        before->next=after;
    }
    if(after!=nullptr){
        after->prev=before;
    }
    delete n;
    return head;

}
int main() {
    vector<int>arr={2,42,4,2,45,2};
    Node* head=arrtoDLL(arr);
    cout<<"original arr: "<<endl;
    print(head);
    cout<<"\nafter delete nth ele arr: "<<endl;
    head=deleteK(head,3);
    print(head);
    // cout<<"\ndelete the node in DLL :)"<<endl;
    // Node* temp = head;
    // while (temp && temp->data != 42)
    //     temp = temp->next;

    // head = deleteN(head, temp);
    // print(head);
    return 0;
}