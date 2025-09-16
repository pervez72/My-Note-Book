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

void insert_tail(Node* &head, Node* &tail, int value) {
    Node* newnode = new Node(value);

    if (head == NULL) { 
        head = newnode;
        tail = newnode; 
        return;
    }

    tail->next = newnode;
    tail = newnode; 
}

// ✅ Fixed: head passed by reference
void del_node(Node* &head){
    if (head == NULL) return; // safety check
    Node* delete_node = head; // deletenode inside head 
    head = head->next; 
    delete delete_node; //delete node this is a dynamic node 
}
 
void print_linklist(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "\n";
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;

    insert_tail(head, tail, 300); 

    del_node(head);

    cout << "tail_value = " << tail->val << " \n";
    print_linklist(head);

    return 0;
}
