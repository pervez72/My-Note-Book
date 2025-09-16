#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};


// Insert at head (updates both head and tail if list is empty)
void insert_head(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

// Insert at tail (updates both head and tail if list is empty)
void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (tail == NULL) {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

// inseat middle position
void inseart_pos(Node* head,int pos,int val){
    Node* newnode=new Node(val);

    if(head==NULL)
    {
        head=newnode;
        return;
    }

    Node* tmp=head;

    for (int i =1; i<pos; i++)
    {
        tmp=head;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}

// delete Head 
void del_head(Node* &head){
    head=head->next;
}

// delete tail
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

// Delete any_position
void del_node_any_pos(Node* &head,int pos){
    Node *tmp=head;

    for(int i=1; i<pos; i++){
        tmp=tmp->next;
    }

    Node* delete_node =tmp; // delete node 
    tmp->next=tmp->next->next; // tmp and after delete node connection 
    delete delete_node; 
}
 
//-------------Output--------------------
void print_list(Node* head) {
    Node* tmp = head;  
    while (tmp != NULL) {  
        cout << tmp->val << " ";
        tmp = tmp->next; 
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insert_head(head, tail, 10);
    insert_head(head, tail, 20);
    insert_head(head, tail, 30);
    inseart_pos(head,1,40);
    

    del_head(head);
    print_list(head);


    return 0;
}