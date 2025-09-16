#include <bits/stdc++.h>
using namespace std;

// return vector 
vector<int> getvec() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    return v;
}

// return array
int* getarry() {
    static int a[] = {2, 3, 2, 31}; // static so it doesn't get destroyed
    return a;
}

// Linked List Node
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val; // ✅ ঠিক করে দিলাম
        next = nullptr;
    }

    // create and return linked list
    Node* getlinklist() {
        Node* head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        return head;
    }
};

int main() {
    // ✅ Vector receive
    vector<int> v = getvec();
    cout << "Vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // ✅ Array receive
    int* arr = getarry();
    cout << "Array: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // ✅ Linked List receive
    Node temp(0); // dummy object to call member function
    Node* head = temp.getlinklist();

    cout << "Linked List: ";
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";

    return 0;
}
