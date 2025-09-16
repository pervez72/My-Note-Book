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

// Actually inserting at tail, so rename the function
void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    // Connection for doubly linked list
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void print_linklist_forward(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Correct usage
    insert_tail(head, tail, 47);
    insert_tail(head, tail, 99);
    insert_tail(head, tail, 23);

    print_linklist_forward(head);

    return 0;
}
