class Solution {
public:
    void helper(TreeNode *root,vector<int>& post){
        if(!root) return;
        helper(root->left,post);
        helper(root->right,post);
        post.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> post;
        helper(root,post);
        return post;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna