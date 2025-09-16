#include<bits/stdc++.h>
using namespace std ;

class Node{
public:
    //link list a two Different Part [data|link or next]
    int val; //Data
    Node *next; //link or next variable

    Node(int value){
    this->val=value; //val = value set
    this->next=NULL; // next variable default NULL set .
    }
};

int main(){

    //create a four/4 Different Node just.
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);

    //now Node Connection
    head->next=a; //head node inside next Variable store = a node Address.
    a->next=b; // a node inside next Variable store = b node Address.
    b->next=c; // now c node inside null store


    //normally Print
    cout<<head->val<<"\n"; // head node inside val print
    cout<<head->next->val<<"\n"; // a node inside val print [value|next]
    cout<<head->next->next->val<<"\n"; // b node inside val print [value|next]
    cout<<head->next->next->next->val<<"\n"; // c node inside val print [value|next]

}
