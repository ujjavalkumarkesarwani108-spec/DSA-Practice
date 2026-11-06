class Solution {
public:
    void helper(TreeNode *root,vector<int>& in){
        if(!root) return;
        helper(root->left,in);
        in.push_back(root->val);
        helper(root->right,in);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> in;
        helper(root,in);
        return in;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna