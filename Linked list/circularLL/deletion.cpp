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

struct Node* deleteHead(Node* head){
    if(head == NULL){
        cout<<"already NULL";
        return head;
    }

    if(head->next==head){
        free(head);
        return NULL;
    }

    struct Node * temp=head;
    struct Node* last=head;
    while(last->next!=head){
        last=last->next;
    }
    last->next=head->next;
    head=head->next;
    free(temp);
    return head;
}

struct Node* deletetail(Node* head){
    if(head==NULL){
        cout<<"already NULL";
        return head;
    }
    if( head->next==head){
        cout<<"there is only head there";
        return head;
    }
    struct Node* temp=head;
    struct Node* prev=NULL; 
    while(temp->next!=head){
        prev=temp;
        temp=temp ->next;
    }
    prev->next=temp->next;
    free(temp);
    return head;

}

struct Node* deleteK(struct Node* head,int k){
    if(head==NULL){
        printf("already NULL: ");
        return head;
    }
    if(k==1){
        deleteHead(head);
    }

    struct Node* temp=head;
    struct Node* prev=NULL;

    int c=1;
    while(temp->next!=head&& c<k){
        prev=temp;
        temp=temp->next;
        c++;
    }

    if(c!=k){
        printf("Invalid\n");
        return head;
    }
    prev->next=temp->next;
    free(temp);
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
    head=deleteHead(head);
    cout<<"after remove head: ";
    display(head);
    // head = deletetail(head);
    // cout<<"after remove of tail: ";\
    // display(head);
    // head = deleteK(head,3);
    // cout<<"after remove the kth ele: ";\
    // display(head);
    return 0;
}