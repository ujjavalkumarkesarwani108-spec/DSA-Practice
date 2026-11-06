class Solution {
public:
    void helper(TreeNode *root,vector<int>& pre){
        if(!root) return;
        pre.push_back(root->val);
        helper(root->left,pre);
        helper(root->right,pre);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> pre;
        helper(root,pre);
        return pre;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna