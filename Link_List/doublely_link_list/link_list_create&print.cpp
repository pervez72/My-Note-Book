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

void print_linklist_forward(Node* head){

    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

void print_linklist_rev(Node* tail){

    Node* tmp=tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
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
    //-------------------------
    // here, [null|10|a](head node)=[head|10|tail](a node)=[a|10|null](tail node)

    print_linklist_forward(head);
    print_linklist_rev(tail);
    return 0; 
}