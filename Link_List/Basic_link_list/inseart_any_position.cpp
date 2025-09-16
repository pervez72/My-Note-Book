 #include<bits/stdc++.h>
using namespace std ;


class Node{
public:
    int val;

    Node *next;

    Node(int value){
    this->val=value;
    this->next=NULL;
    }
};

void insert_any_position(Node* &head,int position,int value){
        // new node create
        Node *newnode=new Node(value);
        // head do not remove
        Node * tmp=head;
        int idx=position;
        for (int i=0; i<idx-1; i++){ //here, i means witch position data insert, i is stop exact this positon , let  linklist = a->b->c->d 
            tmp=tmp->next; // tmp is store after nownode address like : b node inside address.
                            // let,newnode=p set possiton 1
                            // a->p(newnode)->b->c->d
                            //  tmp=b node inside next [data|next]
        }

        newnode->next=tmp->next; // newnode next = tmp address inseart ||this line work connnection between newnode and after newnode linklist like
                                // like p(newnode)->->b->c->d
        tmp->next=newnode; // its work newnode and tmp(previous linklist connection) like a->p(newnode)->b->c->d

       

}

void print_linklist(Node *head){

    Node *temp=head;
    while(temp!=NULL){
        cout<<head->val<<"\n";
        head=head->next;
    }
}


int main(){

    //pre defind link list
    Node *head=new Node(10);
    Node *a=new Node(10);
    Node *b=new Node(10);

    head->next=a;
    a->next=b;

    insert_any_position(head,1,100);
    print_linklist(head);
}
