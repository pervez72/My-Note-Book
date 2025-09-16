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

void delete_head(Node* &head, Node* &tail){
    Node* deleteNode=head;

    head=head->next; // head shifted 
    delete deleteNode;

    // cornercase hundle when head and tail is null,that meaans single node  
    if(head==NULL){
        tail=NULL;
        return;
    }
    head->prev=NULL; // head inside prev null
   
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
    
    delete_head(head,tail);
    print_linklist_forward(head);
    
    return 0; 
}