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

void delete_any_pos(Node* &head, int idx){
    Node* tmp=head;

    for(int i=1; i<idx; i++){
        tmp=tmp->next;
    }

    Node* deletenode=tmp->next; // this node is delete 
    tmp->next=tmp->next->next; // connection done
    tmp->next->prev=tmp;  

    delete deletenode;
   
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
    
    delete_any_pos(head,1);
    print_linklist_forward(head);
    
    return 0; 
}