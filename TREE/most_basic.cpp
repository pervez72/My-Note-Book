#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data; 
    vector<TreeNode*>children; // children হচ্ছে pointer এর vector → চাইল্ড নোডগুলো address store

    TreeNode(int value){
        this->data=value;
    }
}; //এই ক্লাস একটি নোডকে represent করে

// print 
void printTree(TreeNode* node, int level = 0) {
    if (node == nullptr) return;

    for (int i = 0; i < level; i++) cout << "--"; // লেভেল অনুযায়ী dash
    cout << node->data << endl;

    for (TreeNode* child : node->children) {
        printTree(child, level + 1); // চাইল্ডকে আবার প্রিন্ট
    }
}

int main(){
    // root node and child create node 
    TreeNode* root = new TreeNode(1); // level 0
    TreeNode* child1 = new TreeNode(2); // level 1
    TreeNode* child2 = new TreeNode(3); // level 1

    // now connection root and child, রুটে চাইল্ড যোগ করা
    root->children.push_back(child1);
    root->children.push_back(child2);

    // চাইল্ড১ এর আবার দুইটি চাইল্ড (level 2)
    TreeNode* grandchild1 = new TreeNode(4);
    TreeNode* grandchild2 = new TreeNode(5);

    child1->children.push_back(grandchild1);
    child1->children.push_back(grandchild2);

    printTree(root);
}

/*

TreeNode*	= TreeNode টাইপের pointer (নোডের ঠিকানা)
vector<TreeNode*> =	চাইল্ডদের ঠিকানাগুলোর list
new TreeNode(val) = ডাইনামিক মেমোরিতে নোড তৈরি
push_back()	= চাইল্ড যোগ করা
recursive print	= প্রতিটি নোড ও তার চাইল্ড বারবার প্রিন্ট

output:
        1
      /   \
     2     3
   /   \
  4     5
  
*/
