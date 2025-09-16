#include<bits/stdc++.h>
using namespace std ;


class Node{
public:
    //link list a two Different Part [data|link or next]
    int val; //Data

    Node *next; //link or next variable

    Node(int value){ //constructor method 
    this->val=value; //val = value set
    this->next=NULL; // next variable default NULL set .
    }
};

void inseart_head(Node* &head,int value){
        // new node create 
        Node *newnode=new Node(value);
        //previous node and new node connection
        newnode->next=head;
        // head from new node 
        head=newnode;
}

void print_linklist(Node *head){

    Node *temp=head;
        cout<<head->val<<"\n";
        temp->next=temp;

    }


int main(){
    Node *head=new Node(10);
    Node *a=new Node(10);
    Node *b=new Node(10);
    
    head->next=a;
    a->next=b;

    inseart_head(head,100);
    inseart_head(head,200);
    inseart_head(head,300);
    inseart_head(head,400);
    print_linklist(head);

}