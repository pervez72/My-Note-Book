// Function to perform Inorder Traversal (Left → Root → Right) iteratively using stack
void inorderIterative(TreeNode* root) {

    // যদি ট্রি খালি হয়, কিছুই করার নেই
    if (root == NULL) return;

    // Stack তৈরি করলাম
    stack<TreeNode*> st;

    // curr দিয়ে ট্রি ট্রাভার্স করবো
    TreeNode* curr = root;

    // যতক্ষণ Stack খালি না বা curr NULL না হয়
    while (curr != NULL || !st.empty()) {

        // যতক্ষণ বাম পাশে যাওয়া যায়, যাই (Leftmost node পর্যন্ত)
        while (curr != NULL) {
            st.push(curr);      // curr কে Stack এ রাখি (পরে Root হিসেবে প্রিন্ট করবো)
            curr = curr->left;  // বামে যাই
        }

        // একদম বামে পৌঁছে গেছি, এখন Stack থেকে পপ করি
        curr = st.top(); st.pop();

        // নোডের ভ্যালু প্রিন্ট করি (Inorder এর Root)
        cout << curr->val << " ";

        // এখন ডান পাশে যাই
        curr = curr->right;
    }
}
