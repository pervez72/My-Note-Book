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

void insert_tail(Node* &head, Node* &tail, int value) {
    Node* newnode = new Node(value);

    if (head == NULL) { // when list is empty
        head = newnode;
        tail = newnode; // Also update tail if list is empty
        return;
    }

    tail->next = newnode;
    tail = newnode; // Update tail to point to the new last node // tail shifed or tracked tail
                    //like : (head)a->b->c(tail)
                    // update : (head)a->b->c->newnode(tail)
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
    Node* tail = new Node(30); // missing semicolon fixed

    head->next = a;
    a->next = tail;

    insert_tail(head, tail, 300); // typo fixed
    cout<<"tail_value="<<tail->val<<" \n";
    print_linklist(head);

    return 0;
}
