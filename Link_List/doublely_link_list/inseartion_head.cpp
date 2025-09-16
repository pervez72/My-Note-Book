#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int value) {
        this->val = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_head(Node* &head,int val){
    Node *newnode=new Node(val);

    //connecttion newnode and prevoius node
    newnode->next=head;
    head->prev=newnode;

    //head shifted 
    head=newnode;

}

 
void print_linklist_forward(Node* head){

    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

int main(){

    Node *head=new Node(10);
    Node *a=new Node(20); 
    Node *tail=new Node(30);

    // now concction
    head->next=a;
    a->prev=head; 

    a->next=tail;
    tail->prev=a;    
    
    insert_head(head,40);
    print_linklist_forward(head);
    
    return 0; 
}