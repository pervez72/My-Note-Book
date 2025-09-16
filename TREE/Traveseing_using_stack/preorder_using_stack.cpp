// Function to perform Preorder Traversal (Root → Left → Right) iteratively using stack
void preorderIterative(TreeNode* root) {
    
    // যদি ট্রি খালি হয়, তাহলে কিছুই করার নেই
    if (root == NULL) return;

    // একটা Stack বানালাম TreeNode pointer রাখার জন্য
    stack<TreeNode*> st;

    // root node কে প্রথমে Stack-এ পুশ করলাম
    st.push(root);

    // যতক্ষণ Stack খালি না হয়, ততক্ষণ লুপ চালাবে
    while (!st.empty()) {

        // Stack-এর টপ এলিমেন্ট (নোড) বের করলাম
        TreeNode* node = st.top();

        // Stack থেকে নোডটা সরিয়ে ফেললাম
        st.pop();

        // সেই নোডের মান প্রিন্ট করলাম (Preorder এর Root)
        cout << node->val << " ";

        // যদি ডান সন্তান থাকে, তাহলে তাকে আগে Stack-এ পুশ করবো
        // কারণ Stack LIFO — তাই আগে পুশ করলে পরে বের হবে
        if (node->right) st.push(node->right);

        // তারপর যদি বাম সন্তান থাকে, তাকেও Stack-এ পুশ করবো
        // বামটা পরে পুশ হওয়ায় আগে বের হবে (Preorder: Left comes before Right)
        if (node->left) st.push(node->left);
    }
}
