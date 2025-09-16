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

void print_linklist(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "\n";
        temp = temp->next;
    }
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
    
    print_linklist(head);
    return 0;
}
