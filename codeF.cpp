#include <bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node* next;
};


class Stack {
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Stack Push
    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " push Stacked value\n";
    }

    // Stack Pop
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow \n";
            return;
        }
        Node* temp = top;
        cout << "pop value: " << temp->data << "\n";
        top = top->next;
        delete temp;
    }

    // Top operation
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    //Display stack in  values
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        cout << "Stack inside value :";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout <<"\n";
    }


};


int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.pop();
    s.display();



    return 0;
}
