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

void insert_tail(Node* &head,Node* &tail,int val){
    Node *newnode=new Node(val);
    //connecttion newnode and prevoius node
    newnode->prev=tail;
    tail->next=newnode; 

    //tail shifted
    tail=newnode;

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
    
    insert_tail(head,tail,47);

    print_linklist_forward(head);
    
    return 0; 
}