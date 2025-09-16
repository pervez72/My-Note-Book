#include <bits/stdc++.h>
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

void delete_tail(Node* &head, Node* &tail) {
    if (tail == NULL) return; // nothing to delete

    Node* deleteNode = tail;
    tail = tail->prev;

    // Handle corner case when only one node is left
    if (tail == NULL) {
        head = NULL;
    } else {
        tail->next = NULL;
    }

    delete deleteNode;
}

void print_linklist_forward(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20); 
    Node *tail = new Node(30);

    // linking the nodes
    head->next = a;
    a->prev = head; 

    a->next = tail;
    tail->prev = a;    

    delete_tail(head, tail);
    print_linklist_forward(head);

    return 0; 
}
