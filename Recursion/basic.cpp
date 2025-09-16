#include<bits/stdc++.h>
using namespace std;

// step 1
// Basic tree structure create
class TreeNode{
    public:
    int data;
    vector<TreeNode*>children; 
    /*
    এটি TreeNode*, অর্থাৎ TreeNode ক্লাসের পয়েন্টার টাইপ মান স্টোর করে।
    children is pointer type vector. this vector inside chiild address. 
    */
    
    TreeNode(int value){ // value set 
        this->data=value;
    } 
};

// Tree ক্লাস ডিফাইনেশন
//কাজ: সম্পূর্ণ ট্রি ক্লাস তৈরি,এই Tree ক্লাস মূলত পুরো ট্রি-কে represent করে।

class Tree{
    private:
        TreeNode* root; // এটা হল ট্রির root নোডের পয়েন্টার।
    
    public:
    Tree(){
        root=nullptr; //মানে হচ্ছে রুট initially খালি মানে যখন Tree অবজেক্ট তৈরি হবে তখন ট্রিতে কোনো নোড থাকবে না। পরবর্তীতে ডাটা insert করলে রুট সেট হবে।
    }

};

// Step 2

// root node set 
// কাজ: ট্রির রুট নোড সেট করা ,ব্যাখ্যা: রুট নোড পয়েন্টারকে নতুন নোডে সেট করে
void setroot(TreeNode* node){
    root=node;
}

// add child node
//কাজ: প্যারেন্ট নোডে চাইল্ড অ্যাড করা
//ব্যাখ্যা: প্যারেন্ট নোডের চিলড্রেন ভেক্টরে নতুন চাইল্ড পুশ করা হয়
void addchild(TreeNode* parent,TreeNode* child){
    parent->children.push_back(child); // প্যারেন্ট নোডের children ভেক্টরের মধ্যে নতুন child পয়েন্টার যোগ করা হচ্ছে। or children inside , child-এর pointer (address) থাকে,
}

// Step 3 ট্রি টার্মিনোলজি চেকিং
// লিফ নোড চেক
// কাজ: নোডটি লিফ কিনা চেক করা
// ব্যাখ্যা: যদি নোডের চিলড্রেন ভেক্টর খালি হয়, তাহলে এটি লিফ নোড
bool isleaf(TreeNode* node){
    return node->children.empty();
}

// Step 4 : sibling print
//যেকোনো একটা node এর সিবলিংস (ভাই/বোন) গুলো প্রিন্ট করা। অর্থাৎ, যাদের প্যারেন্ট একই কিন্তু তারা নিজে নয়।

void printSiblings(TreeNode* node){
    if(!node || !root) return; //  যদি node বা root null হয়, অর্থাৎ কিছুই না থাকে, তাহলে ফাংশন কিছুই করবে না।

    
}
















int main(){}