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

void insert_any_pos(Node* &head,int idx,int val){
    Node *newnode=new Node(val);

    Node *tmp=head;
    for(int i=1; i<idx; i++){
        tmp=tmp->next;
    }

     //connecttion newnode and after linklist part(right side), bleow 2 line 
    newnode->next=tmp->next;
    tmp->next->prev=newnode;

    //connecttion newnode and after linklist part(left side), bleow 2 line
    tmp->next=newnode;
    newnode->prev=tmp;
  
    
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
    
    insert_any_pos(head,2,40);
    print_linklist_forward(head);
    
    return 0; 
}