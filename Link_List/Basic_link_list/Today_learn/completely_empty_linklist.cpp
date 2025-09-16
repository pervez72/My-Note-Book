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
        Node *newnode=new Node(value); // this node is head and tail both ok
        if(head==NULL){
            head=newnode;
            return;
        }

        // then new node add tail here code below
        Node* tmp=head;
        while(tmp->next!=NULL)
        {
            tmp->next=newnode;
        }
        tmp->next-newnode; //  finally update and and last note null store in tmp variable ok
}

void print_linklist(Node *head){

    Node *temp=head;
    while(temp!=NULL){
        cout<<head->val<<"\n";
        head=head->next;
    }
}


int main(){
    Node *head=NULL;
    inseart_tail(head,300);
    inseart_tail(head,400);
    print_linklist(head);
}