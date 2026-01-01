#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

};
void insert(struct Node*&head,int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;

    if(head==NULL){
        head=newnode;
        newnode->next=head;
        return ;
    }
    struct Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=newnode;
    newnode->next=head;
}

void display(struct Node*head){
    if(head==NULL){
        printf("head is null");
        return;
    }
    struct Node*temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    
}

struct Node* insertAtb(struct Node*&head,int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        newnode->next=newnode;
        return newnode;
    }
    struct Node* temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    
    temp->next=newnode;
    newnode->next=head;
    head=newnode;
    return head;
}

struct Node* insertAtend(struct Node*&head,int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;

    if(head==NULL){
        newnode->next=newnode;
        return newnode ;
    }
    struct Node* temp =head;
    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=newnode;
    newnode->next=head;
    return head;
}

struct Node* insertk(struct Node* head, int k, int val) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = val;
    newnode->next = NULL;

    // Case 1: empty list
    if (head == NULL) {
        if (k != 1) {
            printf("Invalid position\n");
            return head;
        }
        newnode->next = newnode;
        return newnode;
    }

    // Case 2: insert at head
    if (k == 1) {
        struct Node* temp = head;
        while (temp->next != head) temp = temp->next;
        
        temp->next = newnode;
        newnode->next = head;
        head = newnode;
        return head;
    }

    // Case 3: insert at kth position in middle/end
    struct Node* temp = head;
    int c = 1;

    while (temp->next != head && c < k - 1) {
        temp = temp->next;
        c++;
    }

    if (c != k - 1) {
        printf("Invalid position\n");
        return head;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    return head;
}

int main() {
    int n;
    cin>>n;
    struct Node* head =NULL;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insert(head,data);
    }
    cout<<"all elements are: ";
    display(head);
    cout<<endl;

    int InsertAtBeg;
    cout<<"Insert at starting: ";
    cin>>InsertAtBeg;
    head=insertAtb(head,InsertAtBeg);
    cout<<endl;
    display(head);
    cout<<endl;
    int Iend;
    cout<<"enter ele for last: ";
    cin>>Iend;
    head=insertAtend(head,Iend);
    cout<<"after the insertion at end: ";
    display(head);
    cout<<endl;
    head=insertk(head,3,54);
    display(head);
    return 0;
}