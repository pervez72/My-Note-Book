#include<bits/stdc++.h>
using namespace std;

class TreeNode{

    public:
    int val;
    TreeNode* left;
    TreeNode * right;

    public:
    TreeNode(int val){
        this->val=val;
        left=nullptr;
        left =nullptr;
    }
};

// Tree Terversing 
void inorder(TreeNode* root){
    if(root==nullptr) return ;

    inorder(root->left); // ⬅️ এই লাইনে call হলে, current execution "pause" হয়ে যায়
    cout<<root->val<<" ";     // ⬅️ এরপর এই লাইন তখনই চলে, যখন আগের call থেকে "ফিরে আসে"
    inorder(root->right);
}

/*
inorder(root->left); যখন চলে, তখন নতুন করে inorder() ফাংশন শুরু হয়, কিন্তু নতুন ইনপুট দিয়ে (মানে root->left দিয়ে)।
বর্তমান ফাংশনের পরের লাইন তখনই চলবে, যখন ওই নতুন কল শেষ হয়ে "ফিরে" আসবে।
এটাকে বলে call stack — যতগুলো রিকারশন কল হয়, ততগুলো ফাংশন একটার উপর আরেকটা স্ট্যাকে বসে।

বিষয়	ব্যাখ্যা
ফাংশন কল	নতুন inorder() শুরু হয়
আগের ফাংশন	pause হয়ে যায় (stack এ থাকে)
যখন নতুন কল শেষ	তখন পুরনো ফাংশনের পরের লাইন resume হয়

➡️ inorder(root->left); call হলে ফাংশন restart হয় নতুন ইনপুট দিয়ে, আর আগের লাইনে ফিরে আসে তার পরেই যখন ওই নতুন call শেষ হয়।

ধরো তুমি এক রান্নাঘরে রুটি বানাতে গিয়েছো।
রুটি বানাতে গিয়ে দেখলে — আটা নেই → তুমি বাজারে যাচ্ছো আটা আনতে → এটা inorder(root->left);
বাজারে না গিয়েই রুটি বানানো যাবে না → কাজ "pause" করে বাজারে চলে গেলে
বাজার থেকে ফিরে আসার পরে → তখন আবার রুটি বানানো শুরু করো → cout << root->data;
*/



int main(){

        TreeNode* root=new TreeNode(1);

        TreeNode* child1=new TreeNode(2);
        TreeNode* child2=new TreeNode(3);

        // now root and child node connection 
        root->left=child1;
        root->right=child2;

        //agin grand child create 
        TreeNode* gcl1=new TreeNode(4);
        TreeNode* gcr1=new TreeNode(5);

        //agin child create
        TreeNode* gcl2=new TreeNode(6);
        TreeNode* gcr2=new TreeNode(7);

        // now conncetion 
        root->left->left=gcl1;
        root->left->right=gcr1;

        root->right->left = gcl2;
        root->right->right = gcr2;



        cout<<"All Right code "<<"\n";
        cout << "In-order traversal: ";
        inorder(root);
}   