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

Node* remPos(Node* head,int pos){
    if(head==NULL) return head;
    if(pos==1){
        Node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=nullptr){
        cnt++;
        if(cnt==pos){
            prev->next=temp->next;
            delete temp;
            temp=prev->next;
        }
        else{
            prev=temp;
            temp=temp->next;
        }
        
    }
    return head;
}

Node* remele(Node* head,int el){
    if(head==NULL) return head;
    while(head->data==el){
        Node* temp= head;
        head=head->next;
        delete temp;
    }

    Node* temp=head;
    Node* prev=NULL;
    while(temp!=nullptr){
        if(temp->data==el){
            prev->next=temp->next;
            delete temp;
            temp=prev->next;
        }else{
            prev=temp;
            temp=temp->next;
        }
    }
    return head;
}

int main() {
    vector<int> arr={2,42,4,24,4,5,4};
    // int k=3;
    // cin>>k;
    // cout<<"value at "<<k<<" is deleted Now: "<<endl;
    Node* head=arrToLL(arr);
    head=remPos(head,6);
    print(head);

    head=remele(head,4);
    cout<<endl;
    print(head);
    return 0;
}