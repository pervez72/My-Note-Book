#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int value) {
        this->val = value;
        this->next = NULL;
    }
};

void insert_input(Node* &head, Node* &tail, int value) {
    Node* newnode = new Node(value);

    if (head == NULL) { 
        head = newnode;
        tail = newnode; 
        return;
    }

    tail->next = newnode; 
    tail = newnode;
}

void print_rev(Node* tmp) {
    if(tmp==NULL){
        return;
    }
    print_rev(tmp->next); //recursive call 
    cout<<tmp->val<<" "<<"\n";
}

int main() {
    Node* head=NULL;
    Node* tail=NULL;

    int val;

    while (true)
    {
        cin>>val;
        if(val==-1)break;

        insert_input(head,tail,val);
    }
    
    print_rev(head);
    return 0;
}
