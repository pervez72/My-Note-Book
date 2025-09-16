#include<bits/stdc++.h>
using namespace std ;


class Node{
public:
    int val;

    Node *next; 

    Node(int value){
    this->val=value; 
    this->next=NULL; 
    }
};

void inseart_tail(Node* &head,int value){
        // new node create 
        Node *newnode=new Node(value);
        
        // head do not remove
        Node * tmp=head;
        while (tmp->next!=NULL)
        {
          tmp=tmp->next; // right now tmp at last node(previous);
        }

        tmp->next=newnode; //tmp next a new node address stored(new create node)
        
}

void print_linklist(Node *head){

    Node *temp=head;
    while(temp!=NULL){
        cout<<head->val<<"\n";
        head=head->next;
    }
}


int main(){

    //pre defind link list 
    Node *head=new Node(10);
    Node *a=new Node(10);
    Node *b=new Node(10);
    
    head->next=a;
    a->next=b;

    inseart_tail(head,300);
    print_linklist(head);
}