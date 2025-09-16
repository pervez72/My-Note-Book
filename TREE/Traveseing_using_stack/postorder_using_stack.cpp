// Function to perform Postorder Traversal (Left → Right → Root) using two stacks
void postorderIterative(TreeNode* root) {

    // যদি ট্রি খালি হয়, কিছুই করার নেই
    if (root == NULL) return;

    // দুটি Stack ব্যবহার করবো
    stack<TreeNode*> st1, st2;

    // প্রথম Stack-এ root পুশ করলাম
    st1.push(root);

    // যতক্ষণ st1 খালি না হয়
    while (!st1.empty()) {
        TreeNode* node = st1.top();
        st1.pop();

        // st2 তে পুশ করলাম — পরে এই Stack থেকে প্রিন্ট করবো
        st2.push(node);

        // বাম ও ডান সন্তান st1-এ পুশ করলাম (Left আগে, কারণ st2 তে Root শেষে যাবে)
        if (node->left)  st1.push(node->left);
        if (node->right) st1.push(node->right);
    }

    // st2 থেকে pop করে প্রিন্ট করলে Postorder অর্ডার হবে
    while (!st2.empty()) {
        cout << st2.top()->val << " ";
        st2.pop();
    }
}
