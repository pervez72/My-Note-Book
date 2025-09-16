#include <bits/stdc++.h>
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


void print_linklist(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "\n";
        temp = temp->next;
    }
}


// sort selection sort 

void sort_node(Node* head){
for(Node *i=head; i->next!=NULL; i=i->next){
    for(Node *j=i->next; j->next!=NULL; j=j->next){
        
        if(i->val>j->val)swap(i->val,j->val);

    }
}
}




int main() {
    Node* head = new Node(10);
    Node* a = new Node(5);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;
    sort_node(head);
    print_linklist(head);

    return 0;
}
