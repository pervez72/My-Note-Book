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

void del_node_tail(Node* &head,Node* &tail,int pos){
    Node *tmp=head;

    for(int i=1; i<pos; i++){
        tmp=tmp->next;
    }

    Node* delete_node =tmp; // delete node 
    tmp->next=tmp->next->next; // tmp and after delete node connection 
    delete delete_node;

    tail=tmp; //tail changed


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
    Node* a = new Node(22);
   Node* b = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = b;
    b->next=tail;

    del_node_tail(head,tail,3);
    
    print_linklist(head);

    return 0;
}
