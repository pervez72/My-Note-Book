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

// void insert_tail(Node* &head,Node* &tail,int val){
//     Node *newnode=new Node(val);
//     //connecttion newnode and prevoius node
//     newnode->prev=tail;
//     tail->next=newnode; 

//     //tail shifted
//     tail=newnode;

// }

 
void print_linklist_forward(Node* head){

    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

void insert_tail(Node* &head, Node* &tail, int val){
    Node *newnode = new Node(val);

    if (head == NULL) {
        // List is empty, so new node is both head and tail
        head = newnode;
        tail = newnode;
    } else {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
}


int main(){

    Node *head=NULL;
    Node *tail=NULL;

    int x;
    while (true)
    {
        cin>>x;
        if(x==-1)break;
        insert_tail(head,tail,x);
    }

    print_linklist_forward(head);
    
    return 0; 
}