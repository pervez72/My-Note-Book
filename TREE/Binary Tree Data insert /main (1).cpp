#include <bits/stdc++.h>
using namespace std;

class BST { // Binary Search Tree class Represent ok

  class Node { // node create
  public:
    int value;
    Node *left;
    Node *right;
    Node(int val) : value(val), left(nullptr), right(nullptr){};
  };

  //------------------------------Data or Node Inseart Function ok ----------

  // main root pointer or node
  Node *root = nullptr;

  // Inseart Node Function
  Node *insert(Node *root, int val) {
    if (root == nullptr) {
      return new Node(val);
    }
    if (val < root->value) {
      root->left = insert(root->left, val);
    } else {
      root->right = insert(root->right, val);
    }
    return root;
  }
  // value inseart
public:
  void insert(int val) { root = insert(root, val); }

  public:

      //--------------- Value Print Section ok ------------------------
      // Value print all
      void
      inorder() {
    inorder(root);
    cout << endl;
  }
  // then traverseing function ok
private:
  void inorder(Node *node) {
    if (!node)
      return;
    inorder(node->left);
    cout << node->value << " ";
    inorder(node->right);
  }

// Successor 
  
// node {
//   print("ok");
// }








};






// this is main function
int main() {
  BST tree;
  tree.insert(50);
  tree.insert(30);
  tree.insert(70);
  tree.insert(20);
  tree.insert(40);
  tree.insert(60);
  tree.insert(80);

  // output
  tree.inorder();
}
